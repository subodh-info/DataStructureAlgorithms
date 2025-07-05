#include <iostream>

int findMax(int *arr, int size, int index = 0)
{
    if(index >= size)
    {
        return -1;
    }

    int maxElement = findMax(arr, size, index+1);

    return (maxElement > arr[index] ? maxElement : arr[index]);
}


int findMin(int *arr, int size, int index = 0)
{
    if(index == size - 1)
    {
        return arr[index];
    }

    int minElement = findMin(arr, size, index+1);

    return (minElement < arr[index] ? minElement : arr[index]);
}

int main()
{
    int arr[] = {10, 12, 8, 15, 11};
    int size = sizeof(arr)/sizeof(arr[0]);
    std::cout << "max element: " << findMax(arr, size) << std::endl;
    std::cout << "Min element: " << findMin(arr, size) << std::endl;
    return 0;
}