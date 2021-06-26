// C++ Primer Exercise 1.10
// By Blaine McKeever
// 26/06/2021

// Using the decrement operator and a while to sum the numbers from 10 down to 0

#include <iostream>

int main()
{
	int val = 10, sum = 0;

	while(val >= 0)
	{
		sum += val;
		--val;
	}

	std::cout << "The value of the numbers from 10 to 0 added is: " << sum << std::endl;

	return 0;
}