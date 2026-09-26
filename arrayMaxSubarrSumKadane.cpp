#include <iostream>
#include<climits>
using namespace std;

void maxSunarraySum(int *arr, int n) {
    int maxSum = INT_MIN;
    int currSum = 0;
    for(int i = 0; i<n; i++) {
        currSum += arr[i];
        maxSum = max(currSum, maxSum);
        if(currSum < 0) {
            currSum = 0;
        }
    }
    cout<<"The maximum Subarray sum is : "<<maxSum;
}

int main() {
    int arr[] = {-5, 4, 7, 3, 9, 2};
    int n = sizeof(arr) / sizeof(int);
    maxSunarraySum(arr, n);
    return 0;
}