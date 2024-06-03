#include <iostream>
   #include "calculator.h"
   int main() {
       double num1, num2;
       std::cout << "Enter two numbers: ";
       std::cin >> num1 >> num2;
       std::cout << "Sum: " << add(num1, num2) << std::endl;
       std::cout << "Difference: " << subtract(num1, num2) << std::endl;
       std::cout << "Product: " << multiply(num1, num2) << std::endl;
       try {
           std::cout << "Quotient: " << divide(num1, num2) << std::endl;
       } catch (const std::invalid_argument& e) {
           std::cerr << e.what() << std::endl;
       }
       return 0;
   }