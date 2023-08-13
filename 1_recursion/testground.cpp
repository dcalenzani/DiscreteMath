#include <iostream>
#include "factorial.h"
#include "fibonacci.h"
#include "power.h"

int main() {
    int n;
    std::cout << "Enter n: ";
    std::cin >> n;

    int a;
    std::cout << "Enter a: ";
    std::cin >> a;

    unsigned long long result = factorial(n);
    std::cout << "Factorial of " << n << " is: " << result << std::endl;

    unsigned long long fibi = fibonacci(n);
    std::cout << "Fibonacci sequence of " << n << " is: " << fibi << std::endl;

    unsigned long long over = power(a, n);
    std::cout << a << " to the power of " << n << " equals " << over << std::endl;

    return 0;
}