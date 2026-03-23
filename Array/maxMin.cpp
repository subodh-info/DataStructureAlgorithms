/* A program to print the min and max element from array. 
    input: arr = [3, 5, 4, 1, 9]
    output: [1, 9]
*/

#include <iostream>
#include <vector>
#include <algorithm>

std::vector<int> getMinMax(std::vector<int> &arr) {
    // sort element
    std::sort(arr.begin(), arr.end());
    return {arr[0], arr[arr.size()-1]};

}

int main() {
    std::vector<int> arr = {3, 5, 4, 1, 9};
    std::vector<int> result = getMinMax(arr);
    std::cout << "[" << result[0] << ", " << result[1] << "]\n";

    arr = {22, 14, 8, 17, 35, 3};
    result = getMinMax(arr);
    std::cout << "[" << result[0] << ", " << result[1] << "]\n";
}