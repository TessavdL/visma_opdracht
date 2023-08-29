#include "interest.hpp"

/*
	The multiplier is calculated outside of the for loop for more accuracy
*/
float	calculateSavings(int year, float investment, float interestRate) {
	float totalSavings = 0.0;
	float multiplier = 1.0 + (interestRate / 100);

	if (year == 0) {
		return (investment);
	}
	for (int i = 0; i < year; i++) {
		totalSavings += investment;
		totalSavings *= multiplier;
	}
	return (totalSavings);
}

/*
	in the terminal, run "make" to compile the project
	once the program is compiled "make run" will run the program without runTests
	"make test" will provide the program with the filename input.txt to runTests
	std::setprecision(2) is necessary to make sure all calculations occur with 2 decimals
*/
int	main(int argc, char **argv) {
	std::cout << std::fixed << std::setprecision(2);

	if (argc == 2) {
		runTests(argv[1]);
	}

	std::cout << calculateSavings(1, 1000, 4.0) << '\n';
	std::cout << calculateSavings(2, 1000, 4.0) << std::endl;
	return (0);
}
