#include <iostream>

long calFact(int num)
{
    if(num <= 1)
    {
        return 1;
    }

    return num * calFact(num - 1);
}

int main()
{
    std::cout << "Factorial of 11: " << calFact(11) << std::endl;
    return 0;
}