#include <iostream>
#include <climits>

using namespace std;

void maxSubarraySum(int *arr, int n) {
    int maxSum = INT_MIN;
    for(int i = 0; i<n; i++) {
        int currSum = 0;
        for(int j = i; j<n; j++) {
            currSum += arr[j];
            maxSum = max(currSum, maxSum);
        }
    }
    cout<<"The maximum subarray sum is : "<<maxSum;
}

int main() {
    int arr[] = {-5, 4, 7, 3, 9, 2};
    int n = sizeof(arr) / sizeof(int);
    maxSubarraySum(arr, n);
    return 0;
}