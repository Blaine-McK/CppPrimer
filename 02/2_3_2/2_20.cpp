// C++ Primer
// Section 2.3.2
// Exercise 2.20
// By Blaine McKeever
// 18/08/21

// What does the following program do?

 #include <iostream>

 int main()
 {
    int i = 42;
    int *p1 = &i;
    *p1 = *p1 * *p1;

    std::cout << *p1 << std::endl;
    std::cout << i << std::endl;
    

    // This program squares i and stores it in i

    return 0;
 }