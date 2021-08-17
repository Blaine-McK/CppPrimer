 // C++ Primer
 // Section 2.3.2
 // Exercise 2.18
 // By Blaine McKeever
 // 17/08/21

/*
    Write code to change the value of a pointer. Write code to change the value
    to which the pointer points
*/

 #include <iostream>

 int main()
 {
    // Change the value of a pointer
    int value1 = 777; 
    int value2 = 999;

    int *pi = &value1;
    std::cout << "Pointer pi: " << pi << std::endl;
    pi = &value2;
    std::cout << "Pointer pi: " << pi << std::endl;

    // Change the value to which the pointer points
    std::cout << "Value 1: " <<  value1 << std::endl;
    std::cout << "Value 2: " <<  value2 << std::endl;
    
    *pi = 111;

    std::cout << "Value 1: " <<  value1 << std::endl;
    std::cout << "Value 2: " <<  value2 << std::endl;

     return 0;
 }