/* Given an array of positive integers arr[] of size n, 
the task is to find the second largest distinct element in the array.

NOTE:- If the second largest element does not exist, then return -1.

Examples:
Input: arr[] = {12, 35, 1, 10, 34, 1};
output: 34
Explanation: The largest element in the array is 35 and the second largest element is 34

Input: arr[] = {10, 5, 10};
output: 5
Explanation: The largest element in the array is 10 and the second largest element is 5

Input: arr[] = {10, 10, 10};
output: -1
Explanation: The largest element in the array is 10 and there is no second largest element.
*/

#include <iostream>
#include <vector>

using namespace std;

int secondLargest(const vector<int> &arr) {
    int largest = -1, slargest = -1;
    for(int i = 0; i < arr.size(); i++) {
        if(arr[i] > largest) {
            slargest = largest;
            largest = arr[i];
        }
        else if(arr[i] < largest && arr[i] > slargest) {
            slargest = arr[i];
        }
    }
    return slargest;
}

int main() {
    // vector<int> arr= {12, 35, 1, 10, 34, 1};
    // vector<int> arr = {10, 5, 10};
    vector<int> arr = {10, 10, 10};
    
    int sLargest = secondLargest(arr);
    cout << "second largest => " << sLargest << endl;

    
}