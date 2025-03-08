/* 
program to find the pair from two sorted arrays such that
the sum of pair is closest to a given number x. 
*/
#include <iostream>
#include <vector>
#include <climits>

void printClosest(int arr1[], int arr2[], int m, int n, int x) {
    // intialize the difference between pair sum and x
    int diff = INT_MAX;

    // result indices from arr1 and arr2 respectively.
    int res_l, res_r;

    // start from left side of arr1 and right side of arr2
    int l = 0, r = n - 1;

    while (l < m && r >= 0) {
        // If the pair is closer to x than the previously
        // found closest, then update res_l, res_r and diff.
        if(std::abs(arr1[l] + arr2[r] - x) < diff) {
            res_l = l;
            res_r = r;
            diff = std::abs(arr1[l] + arr2[r] - x);
        }
        
        // if sum of this pair is more than x, move to smaller side
        if(arr1[l] + arr2[r] > x) {
            r--;
        }
        else { // move to the greater side
            l++;
        }
    }

    // Print the result
    std::cout << "The closest pair is [" << arr1[res_l] << ", " << arr2[res_r] << "] \n";
}


// Driver program to test above functions
int main() {
    int arr1[] = {1, 4, 5, 7};
    int arr2[] = {10, 20, 30, 40};

    int m = sizeof(arr1) / sizeof(arr1[0]);
    int n = sizeof(arr2) / sizeof(arr2[0]);
    int x = 38;
    printClosest(arr1, arr2, m, n, x);

    return 0;
}