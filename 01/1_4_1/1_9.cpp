// C++ Primer Exercise 1.9
// By Blaine McKeever
// 26/06/2021

// Program to sum numbers 50 to 100 using while loop

#include <iostream>

int main()
{
	int val = 50, sum = 0;

	while (val <= 100)
	{
		sum += val;
		++val;
	}

	std::cout << "The sum of the values from 50 to 100 is " << sum << std::endl;

	return 0;
}