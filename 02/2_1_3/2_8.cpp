 
// C++ Primer
// Section 2.1.3
// Exercise 2.8
// By Blaine McKeever
// 26/07/21

// Write a program to print 2M followed by a new line using escape sequences

// Modify the program to print 2, then a tab, then an M, followed by a new line

#include <iostream>

int main()
{
    
    std::cout << "\062\t\x4d\012" << std::endl;
    
    return 0;
}