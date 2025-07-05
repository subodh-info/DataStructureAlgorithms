#include <iostream>

void print(int num)
{
    if(num == 0)
    {
        return;
    }
    
    std::cout << num << std::endl;
    
    // recursive call
    print(num - 1);
}

int main()
{
    std::cout << "Number from 120 to 1: " << std::endl;
    print(120);
    return 0;
}