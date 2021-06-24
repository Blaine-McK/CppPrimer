// C++ Primer Exercise 1.6
// By Blaine McKeever
// 24/06/2021

// Is the following program fragment legal?

///*
#include <iostream>

int main()
{

	int v1 = 0, v2 = 0;

	std::cout << "The sum of the of " << v1;
				<< " and " << v2;
				<< " is " << v1 + v2 << std::endl;

	return 0;
}	
//*/

/*
	No, becasue the semicolon ends the statement. This means that the following statements are
	not writing to the standard output, there is no left hand operand of type ostream for the operator <<

	I would fix it by adding std::cout to the beginning of lines 16 and 17

	***Compiler output***

	Microsoft (R) C/C++ Optimizing Compiler Version 19.28.29335 for x86
	Copyright (C) Microsoft Corporation.  All rights reserved.

	1_6.cpp
	1_6.cpp(16): error C2059: syntax error: '<<'
	1_6.cpp(17): error C2059: syntax error: '<<'
*/

