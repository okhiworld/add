#include "divide.h"
#include <iostream>
     double divide(double a, double b) {
         if (b == 0) {
             std::cout << "Enter two numbers: ";
         }
         return a / b;
     }