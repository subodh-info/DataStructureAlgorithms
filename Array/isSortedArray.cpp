/*This program verify that array is sorted. 

In this program we implement logic for verify that arrays is sorted in ascending order or descending order or if orderer is not mention.
*/

// Case:-1 (Verify that array is sorted in ascending order)
#include <iostream>
#include <vector>

bool isSortedAscending(std::vector<int> v) {
    if(v.size() <= 1) {
        return true;
    }
    else {
        for(int i = 0; i < v.size() -1; ++i) {
            if(v[i] > v[i+1]) {
                return false;
            }
        }
    }
    return true;
}

// case-2: (verify that arrays is sorted into descending order)
bool isSortedDesc(const std::vector<int> v) {
    if(v.size() <= 1) {
        return true;
    }
    else {
        for(int i = 0; i < v.size() - 1; ++i) {
            if(v[i] < v[i+1]) {
                return false;
            }
        }
    }
    return true;
}

// Case -3 (if order is not given)
bool isSorted(const std::vector<int> v) {
    bool ascending = true, descending = true;
    if(v.size() <= 1) {
        return true;
    }
    else {
        for(int i = 0; i < v.size() - 1; ++i) {
            if(v[i] > v[i+1]){
                ascending = false;
            }
            else if(v[i] < v[i+1]) {
                descending = false;
            }
        }
    }
    return ascending || descending;
}

int main() {
    std::vector<int> v1 = {12, 14, 16, 17, 21, 23};
    // isSortedAscending(v1) ? (std::cout << "sorted array in ascending order") : (std::cout << "array is not sorted...");

    std::vector<int> v2 = {23, 21, 19, 15, 8, 4, 3, 1, 13};
    // isSortedDesc(v2) ? (std::cout << "sorted array in descending order") : (std::cout << "array is not sorted...");
    // isSorted(v1) ? (std::cout << "Array is sorted") : (std::cout << "Array is not sorted");
    isSorted(v2) ? (std::cout << "Array is sorted") : (std::cout << "Array is not sorted");

    return 0;
}