// C++ Primer Exercise 1.4
// By Blaine McKeever
// 24/06/2021

#include <iostream>

int main()
{

	int v1 = 0, v2 = 0;

	std::cout << "Input two numbers to multiply" << std::endl;
	std::cin >> v1 >> v2;
	std::cout << v1 << " x " << v2 << " = " << v1 * v2 << std::endl;

	return 0;
}