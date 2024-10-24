#include <iostream>
#include "calc.h"

int main() {
    Calc calc;

    double result = calc.FuncA();
    std::cout << "Result of FuncA for the first 3 elements: " << result << std::endl;

    return 0;
}

