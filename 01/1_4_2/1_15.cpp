// C++ Primer Exercise 1.15
// By Blaine McKeever
// 30/06/2021

// Write the programs with common compiler errors and observe the compiler output after compiling
// The errors have been fixed in this program

#include <iostream>

// missing ) in parameter list for main
int main()
{
	// Used a colon, not a semi colon
	std::cout << "Read each file." << std::endl;

	// Missing quotes around string literal
	std::cout << "where da quotes?" << std::endl;

	// Second output operator is missing
	std::cout << "where da 2nd output operator?" << std::endl;

	int v1 = 0, v2 = 0;

	std::cin >> v1 >> v2;	// uses v not v1

	// cout not defined should be std::cout
	std::cout << v1 + v2 << std::endl;


	// Missing semi colon
	return 0;
}