#include <iostream>

//void print(int arr[], size_t size, int index = 0)
void print(int *arr, size_t size, int index = 0)
{
    if(index >= size)
    {
        return;
    }

    std::cout << arr[index] << std::endl;
    print(arr, size, ++index);
}

int main()
{
    int arr[] = {12, 14, 16, 18, 20, 22, 24, 26};
    std::cout << "Elements of array: " << std::endl;
    int size = sizeof(arr)/sizeof(arr[0]);
    print(arr, size);
    return 0;
}