// C++ Primer Exercise 1.19
// By Blaine McKeever
// 26/06/2021

// Modify previous program that printed range of integers to accomodate for when the first number input
// is smaller that the second

#include <iostream>

int main()
{
	std::cout << "Please input 2 integers" << std::endl;
	int first = 0, second = 0, sum = 0, val = 0;
	std::cin >> first >> second;
    // Check if the first number is smaller than second
    if (first < second) 
    {
        val = first;
        while (val <= second)
	    {
		    sum += val;
		    ++val;
	    }
    }
    // If it is larger
    else
    {
        val = first;
        while (val >= second)
	    {
		    sum += val;
		    --val;
	    }
    }

	std::cout << "The sum of the values between " << first << " and " << second << " is " << sum << std::endl;

	return 0;
}

