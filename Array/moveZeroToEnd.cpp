/*
Given an array of integers arr[], move all the zeros to the end of the array while maintaining the relative order of all non-zero elements.

There are several ways to solve this problem but two pointer is the best approach.

Idea:- 
-------
We took a pointer, say count to track where the next non-zero element should be placed. 
However, on encountering a non-zero element, instead of directly placing non-zero element at arr[count], we will swap the non-zero element 
with arr[count]. This will ensure that if there is any zero present at arr[count], it is pushed toward the end of array and it is not overwritten.
*/

#include <iostream>
#include <vector>

void pushZeroToEnd(std::vector<int> &arr) {
    int count = 0;
    for(int i = 0; i < arr.size(); ++i) {
        // if the current element is not zero
        if(arr[i] != 0) {

            // swap the current element with the 
            // zero at index count
            std::swap(arr[i], arr[count]);

            // move 'count' pointer to next position
            count++;
        }
    }
}

int main() {
    std::vector<int> v = {1, 2, 0, 4, 3, 0, 5, 0};
    pushZeroToEnd(v);

    for(int ele : v) {
        std::cout << ele << " ";
    }
    std::cout << std::endl;
    EXIT_SUCCESS;
}

