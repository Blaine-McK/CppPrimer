// C++ Primer
// Section 2.5.2
// Exercise 2.34
// By Blaine McKeever
// 02/09/21

#include <iostream>

int main()
{
    int i = 0, &r = i;
    auto a = r; // a is an int (r is an alias for i, which has type int)

    const int ci = i, &cr = ci;
    auto b = ci;  // b is an int (top-level const ci is dropped)
    auto c = cr;  // c is an int (cr is an alias for ci whose const is top-level)
    auto d = &i;  // d is an int* (& of an int object is int*)
    auto e = &ci; // e is const int* (& of a const object is low-level const)
    auto &g = ci; // g is a const int& that is bound to ci

    a = 42; // a will be assigned 42
    b = 42; // b will be assigned 42
    c = 42; // c will be assigned 42
    d = 42; // error
    e = 42; // error
    g = 42; // error

    return 0;
}