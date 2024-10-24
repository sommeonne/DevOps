#include <iostream>
#include "calc.h"

int main() {
    Calc calc;
    int n;
    
    std::cout << "Enter the number of elements to sum: ";
    std::cin >> n;
    
    double result = calc.FuncA(n);
    std::cout << "Result of FuncA for n = " << n << ": " << result << std::endl;


    return 0;
}

