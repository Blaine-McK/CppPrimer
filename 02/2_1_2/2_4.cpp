// Cpp Primer Exercise Section 2.1.2
// Exercise 2.4
// 18/07/21
// By Blaine McKeever

#include <iostream>

int main()
{
    
    unsigned u = 10, u2 = 42;
    std::cout << u2 - u << std::endl;
    std::cout << u - u2 << std::endl;
    int i = 10, i2 = 42;
    std::cout << i2 - i << std::endl;
    std::cout << i - i2 << std::endl;
    std::cout << i - u << std::endl;
    std::cout << u - i << std::endl;
    
    return 0;
}