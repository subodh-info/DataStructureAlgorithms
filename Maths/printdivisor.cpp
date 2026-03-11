/* A program to print all divisor of input positive integer.*/

#include <iostream>
#include <vector>
#include <algorithm>
void printDivisor(int num) {
    if(num == 0) {
        std::cout << 0 << std::endl;
    }

    std::vector<int> divisors;
    for(int i = 1; i*i <= num; i++) {
        if(num % i == 0) {
            divisors.push_back(i);
            if(i != num / i){
                divisors.push_back(num/i);
            }
        }
    }
    std::sort(divisors.begin(), divisors.end());
    for(auto it = divisors.begin(); it != divisors.end(); it++) {
        std::cout << *it << " ";
    }
    std::cout << std::endl;
}

int main() {
    int n = 15;
    printDivisor(n);

    n = 16;
    printDivisor(n);

    n = 36;
    printDivisor(n);
}