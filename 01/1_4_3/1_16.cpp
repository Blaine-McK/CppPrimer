// C++ Primer Exercise 1.16
// By Blaine McKeever
// 02/07/2021

// Write a program that adds a set of numbers read in from cin

#include <iostream>

int main() 
{
	std::cout << "Please input the numbers you would like to add followed by a" << std::endl;

	int value = 0, sum = 0;

	while (std::cin >> value)
	{
		sum += value;
	}

	std::cout << "The value of the numbers you have input added together is: " << sum << std::endl;

	return 0;
}