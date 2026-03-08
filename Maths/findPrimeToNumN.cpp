/* A program to find all prime numbers up to a given number n.

for this purpose there one of an efficient algorithm is used that is "Sieve of Eratosthenes".
Instead of checking each number individually for primality,
this algorithm eliminates multiples of primes step by step, leaving only prime numbers. 

let's understand with the help of example - 
initial list of numbers:
2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27 28 29 30

Step-1: Remove multiples of 2 - 
2 3 X 5 X 7 X 9 X 11 X 13 X 15 X 17 X 19 X 21 X 23 X 25 X 27 X 29 X

Step-2: Remove multiples of 3 - 
2 3 X 5 X 7 X X X 11 X 13 X X X 17 X 19 X X X 23 X 25 X X X 29 X

step-3: Remove multiples of 5-
2 3 X 5 X 7 X X X 11 X 13 X X X 17 X 19 X X X 23 X X X X X 29 X

Now, remaining numbers:-
2 3 5 7 11 13 17 19 23 29
These are the prime numbers <=30
*/

#include <iostream>
#include <vector>

void printAllPrimes(int n) {
    std::vector<int> primes(n+1, true);

    primes[0] = primes[1] = false;

    for(int i = 2; i*i <= n; i++ ) {
        if(primes[i]) {
            for(int j = i * i; j <= n; j+=i) {
                primes[j] = false;
            }
        }
    }

    std::cout << "Primes numbers up to " << n << ":\n";
    for(int i = 2; i <= n; i++) {
        if(primes[i]){
            std::cout << i << " ";
        }
    }
    std::cout << std::endl;
}

int main() {
    int n = 30;
    printAllPrimes(n);
}