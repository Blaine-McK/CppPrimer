// C++ Primer Exercise 1.8
// By Blaine McKeever
// 26/06/2021

// Which are illegal, if any?

#include <iostream>

int main()
{

//	std::cout << "/*";					// legal, string literal
//	std::cout << "*/";					// legal, string literal
//	std::cout << /* "*/" */;			// legal, comment containing "*/", nothing input to standard output
//	std::cout << /* "/*" /* "/*" */;	// legal, nothing input to standard output

	return 0;
}

// Statement on line 14 is actually illegal, a */ is found outside of a comment
// Statement on line 15 is also illegal, due to the semi colon after the input operator