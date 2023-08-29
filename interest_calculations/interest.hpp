#ifndef INTEREST_HPP
# define INTEREST_HPP

#include <iostream>
#include <sstream>
#include <fstream>
#include <iomanip>
#include <vector>
#include <cmath>

typedef struct  		s_data {
	float				investment;
	int					interest;
	std::vector<float>	yearlySavings;
} 						t_data;

void	runTests(const char* fileName);
float	calculateSavings(int year, float investment, float interestRate);

#endif
