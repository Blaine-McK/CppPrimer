// C++ Primer Exercise 1.13
// By Blaine McKeever
// 30/06/2021

// Rewrite the while loops from the first 2 exercises of 1_4_ as for loops

#include <iostream>

int main()
{
	int sum = 0;

	for (int i = 50; i <= 100; ++i)
	{
		sum += i;
	}

	std::cout << "The sum of values 50 to 100 inclusive is: " << sum << std::endl;

	int sum2 = 0;

	for (int i = 10; i >= 0; --i)
	{
		sum2 += i;
	}

	std::cout << "The value of the sum of numbers from to to 0 is: " << sum2 << std::endl;

	return 0;
}