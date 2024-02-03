#include <iostream>

class OverloadedFunctions {
public:
    // Function with two integer parameters
    int add(int a, int b) {
        std::cout << "Adding two integers: ";
        return a + b;
    }

    // Function with two double parameters
    double add(double a, double b) {
        std::cout << "Adding two doubles: ";
        return a + b;
    }

    // Function with three integer parameters
    int add(int a, int b, int c) {
        std::cout << "Adding three integers: ";
        return a + b + c;
    }
};

int main() {
    OverloadedFunctions calculator;

    // Call the function with two integers
    std::cout << calculator.add(5, 3) << std::endl;

    // Call the function with two doubles
    std::cout << calculator.add(2.5, 3.7) << std::endl;

    // Call the function with three integers
    std::cout << calculator.add(1, 2, 3) << std::endl;

    return 0;
}
