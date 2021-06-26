// C++ Primer Exercise 1.10
// By Blaine McKeever
// 26/06/2021

// Write a program that prompts the user for two integers, print each number in the range specified by 
// these integers

#include <iostream>

int main()
{
	std::cout << "Please input 2 integers" << std::endl;
	int lower = 0, upper = 0, sum = 0, val = 0;
	std::cin >> lower >> upper;
	val = lower;
	while (val <= upper)
	{
		sum += val;
		++val;
	}

	std::cout << "The sum of the values between " << lower << " and " << upper << " is " << sum << std::endl;

	return 0;
}

