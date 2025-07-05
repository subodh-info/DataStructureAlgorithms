#include <iostream>

int totalDigits(int num)
{
   if(num == 0)
   {
        return 0;
   }

   return 1 + totalDigits(num/10);
}

int main()
{
    int numbers = -12345;
    std::cout << "Total number of digits: " << totalDigits(numbers) << std::endl;
    return 0;
}