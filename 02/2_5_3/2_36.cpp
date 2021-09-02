// C++ Primer
// Section 2.5.3
// Exercise 2.36
// By Blaine McKeever
// 02/09/21

/*
    In the follwoing code, determine the type of each varirbale and the value it contains
    when the program ends
*/

#include <iostream>
int main()
{
    int a = 3, b = 4; // a and b are ints
    std::cout << "a: " << a << std::endl;
    std::cout << "b: " << b << std::endl;
    decltype(a) c = a; // c is an int and has a value 3
    std::cout << "c: " << c << std::endl;
    decltype((b)) d = a; // d is an int& and is bound to a, it will return the value 3
    std::cout << "d: " << d << std::endl;
    ++c; // c now has a value 4
    std::cout << "c: " << c << std::endl;
    ++d; // d refers to a and so a is incremented to a new value, 4
    std::cout << "d: " << d << std::endl;
    std::cout << "a: " << a << std::endl;

    return 0;
}