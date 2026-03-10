/* A program to calculate sum of square of first N odd natural numbers.
    like - pow(1, 2) + pow(3, 2) + pow(5, 2) + ...... +pow((2N-1), 2)
*/

#include <iostream>

// We can also calculate this using iteration but we use maths formula for 
// better time and space complexity

// using mathematical formula.
long sum(int N) {
    return (N* (2*N - 1) * (2*N + 1)) / 3;
}

int main() {
    int N = 3;
    std::cout << "Sum of square of first " << N << " odd natural number: " << sum(N) << std::endl;

    N = 4;
    std::cout << "Sum of square of first " << N << " odd natural number: " << sum(N) << std::endl;

}