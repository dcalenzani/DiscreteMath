#include "factorial.h"
#include <iostream>
#include <stdio.h>

unsigned long long factorial(int n){
    unsigned long long result = 1;
    
    if(n<0){
        std::cerr << "Error: Factorial is not defined for negative numbers." << std::endl;
    }
    else{
        for(int i=1;i<=n; i++) {
            result *= i;;
        }
    }

    return result;
}