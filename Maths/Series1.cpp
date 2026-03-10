/* A program to caluclate the sume of below patterns - 
    sum = 2 + 22 = 24
    sum = 2 + 22 + 222 = 246
Here, we are writing the program for this pattern - 
    2+22+222+2222+............N terms

Below is the very General formulla to compute series like - 
3+33+333+3333+.................N terms
7+77+777+7777+.................N terms.

sum = (d/81) * (10 * (pow(10, N) - 1) - 9N)
*/

#include <iostream>
#include <cmath>
long sum(int N) {
    long _sum = 0;
    int terms = 0;
    for(int i = 1; i <= N; i++) {
        terms = terms*10 + 2;
        _sum = _sum + terms;
    }

    return _sum;
}

// Using recursion
long gSum = 0;
int gTerm = 0;
long sumRec(int N) {
    if(N == 0) {
        return 0;
    }
    gTerm = gTerm * 10 + 2;
    gSum += gTerm;
    sumRec(N-1);
    return gSum;
}

// Using mathemtaical formulla
long sumMath(int N) {
    return (2.0/81) * (10 * (pow(10, N) - 1) - 9 * N);
}

int main(){
    int N = 4;
    // std::cout << sum(N) << std::endl;
    // std::cout << sumRec(N) << std::endl;
    std::cout << sumMath(N) << std::endl;
}