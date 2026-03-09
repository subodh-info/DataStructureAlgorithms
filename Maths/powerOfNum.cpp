/* A program to compute pow(n, m). 
example - pow(n, m); -> n*n*n*n....m times.
pow(n, -m); -> 
result = n*n*n*n..... m times. After that 1/result.
Hence, 
pow(n, -m) = 1/pow(n, m)
*/

#include <iostream>

long power(int n, int m) {
    if(m == 0) {
        return 1;
    }
    if(n == 0) {
        return 0;
    }
    long result = 1;
    for(int i = 1; i <=m; i++) {
        result = result * n;
    }
    return result;
}

long double computePow(int n, int m) {
    long double result = 1;
    if(m < 0) {
        result = 1.0/power(n, -m);
    }
    else {
        result = power(n, m);
    }

    return result;
}

int main() {
    int n = 2, m = 3;
    std::cout << "pow(" << n << "," << m << "): " << computePow(n, m) << std::endl;

    n = 2; m = 0;
    std::cout << "pow(" << n << "," << m << "): " << computePow(n, m) << std::endl;

    n = 0; m = -1; // Here, program throws exception. we need to handle this 
    // std::cout << "pow(" << n << "," << m << "): " << computePow(n, m) << std::endl;

    n = 0; m = 2;
    std::cout << "pow(" << n << "," << m << "): " << computePow(n, m) << std::endl;

    n = 5; m = -2;
    std::cout << "pow(" << n << "," << m << "): " << computePow(n, m) << std::endl;
}

