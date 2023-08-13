#include "fibonacci.h"
#include <stdio.h>

// This recursive approach is more concise, but it can be less efficient than the iterative version for large values of n. Each call to the fibonacci function generates two more recursive calls, leading to an exponential growth in the number of function calls. For small values of n, the recursive version works fine, but for very large n, it can lead to slow execution due to redundant calculations

unsigned long long fibonacci(int n) {
    if (n <= 0) {
        return 0; // Fibonacci is not defined for n <= 0
    }

    if (n == 1 || n == 2) {
        return 1; // Base case: F(1) and F(2) are both 1
    }

    return fibonacci(n - 1) + fibonacci(n - 2); // Recursive case
}
