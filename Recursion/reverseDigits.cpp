#include <iostream>
#include <cmath>

// version - 1 (If don't the number of digits in argumant)
int reverseDigits(int num, int result = 0)
{
    if(num == 0)
    {
        return result;
    }

    result = result * 10 + num % 10;
    return reverseDigits(num/10, result);
}


// Verson - 2 (If the number of digits are passed as arguments)
int reverseNumbers(int num, int digits)
{
    if(num == 0)
    {
        return 0;
    }

    int lastDigit = num % 10;

    return lastDigit * pow(10, digits-1) + reverseNumbers(num/10, digits -1);
}

int main()
{
    int numbers = 1234;
    //std::cout << "Reverse digits: " << reverseDigits(numbers) << std::endl;
    std::cout << "Reverse digits: " << reverseNumbers(numbers, 4) << std::endl;
    return 0;
}