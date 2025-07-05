#include <iostream>

void print(int num)
{
    if(num == 0)
    {
        return;
    }
    print(num - 1);
    
    std::cout << num << std::endl;
}

int main()
{
    std::cout << "Numbers from 1 to 111" << std::endl;
    print(111);
    return 0;
}