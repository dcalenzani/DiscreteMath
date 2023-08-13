#include "power.h"
#include <stdio.h>
#include <iostream>

// A work in progress? Este programa no deberia funcionar para n negativos. En C++ al definirlo como int estamos declarando que es entero positivo (RESPALDAR).

unsigned long long power(int a, int n){
    if (a==0 && n==0){
        std::cerr << "Error: Power function doesnt work for a=0 and n=0." << std::endl;
        return 0; // Returning 0 to handle the error case gracefully
    }
    if (n < 0) {
        std::cerr << "Error: Power function doesn't work for negative n." << std::endl;
        return 0; // Returning 0 to handle the error case gracefully.
    }
    if (a==0){
        return 0;
    }
    if (n==0){
        return 1;
    }
    return a * power(a, n - 1);
}