#include "./interest.hpp"

static std::vector<t_data>	getTestInput(const char *fileName) {
	std::vector<t_data>	tests;
	std::ifstream		fileContents(fileName);
	std::string			line;

	if (!fileContents.is_open()) {
		std::cerr << "An error occured while reading the file" << '\n';
		return tests;
	}
	while (std::getline(fileContents, line)) {
		t_data				test;
		std::istringstream	inputStringStream(line);
	
		inputStringStream >> test.investment >> test.interest;
		while (!inputStringStream.eof()) {
			float	investment;
			inputStringStream >> investment;
			test.yearlySavings.push_back(investment);
		}
		tests.push_back(test);
	}
	fileContents.close();
	return (tests);
}

static bool	areAlmostEqual(float a, float b) {
	return (std::abs(a - b) < 0.01);
}

void	runTests(const char* fileName) {
	std::vector<t_data> tests = getTestInput(fileName);

	for (size_t i = 0; i < tests.size(); i++) {
		float	investment = tests[i].investment;
		int		interestRate = tests[i].interest;
		for (size_t j = 0; j < tests[i].yearlySavings.size(); j++) {
			float	myYearlySavings = calculateSavings(j + 1, investment, interestRate);
			if (!areAlmostEqual(myYearlySavings, tests[i].yearlySavings[j])) {
				std::cout << myYearlySavings << " is not equal to " << tests[i].yearlySavings[j] << '\n';
			}
		}
	}
	std::cout << "Finished testing" << '\n';
}