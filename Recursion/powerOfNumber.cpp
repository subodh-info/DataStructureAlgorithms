#include <iostream>

float power(int base, int expo)
{
    if(base == 0 && expo == 0)
    {
        std::cout << "Error: raised of the power zero of a zero is undefined......" << std::endl;
        return -1;
    }

    if(expo == 0)
    {
        return 1;
    }

    if(expo < 0)
    {
        return 1/(base * power(base, -expo));
    }

    return (base * power(base, expo - 1));
}

int main()
{

    std::cout << "(2^3): " << power(2, -3) << std::endl;
    return 0;
}