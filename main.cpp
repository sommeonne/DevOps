#include <iostream>
#include "calc.h"

int main() {
    Calc calc;
<<<<<<< HEAD

    double result = calc.FuncA();
    std::cout << "Result of FuncA for the first 3 elements: " << result << std::endl;
=======
    int n;
    
    std::cout << "Enter the number of elements to sum: ";
    std::cin >> n;
    
    double result = calc.FuncA(n);
    std::cout << "Result of FuncA for n = " << n << ": " << result << std::endl;
>>>>>>> branchA

    return 0;
}

