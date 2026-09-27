#include <iostream>
#include<climits>

using namespace std;

void printArr(int *arr, int n) {
    for(int i = 0; i<n; i++) {
        cout<<arr[i]<<" ";
    }
}

void countingSort(int *arr, int n) {
    int freq[10000], minVal = INT_MAX, maxVal = INT_MIN;
    for(int i = 0; i<n; i++){
        freq[arr[i]]++;
        minVal = min(arr[i], minVal);
        maxVal = max(arr[i], maxVal);
    }
    for(int i = minVal, j = 0; i<=maxVal; i++) {
        while(freq[i] > 0) {
            arr[j++] =  i;
            freq[i]--;
        }
    }
}

int main() {
    int arr[] = {5, 4, 7, 3, 9, 2};
    int n = sizeof(arr) / sizeof(int);
    countingSort(arr, n);
    printArr(arr, n);
    return 0;
}