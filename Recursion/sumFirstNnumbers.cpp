#include <iostream>

size_t sum(int num)
{
    if(num == 0)
    {
        return 0;
    }

    return num + sum(num-1);
}

size_t sumWithoutRecursion(int num)
{
    return (num * (num + 1)) /2;
}

int main()
{
    std::cout << "sum of first 10 natural numbers: " << sum(10) << " (using recursion)" << std::endl;
    std::cout << "sum of first 10 natural numbers: " << sumWithoutRecursion(10) << " (Without Recursion)" << std::endl;
    return 0;
}