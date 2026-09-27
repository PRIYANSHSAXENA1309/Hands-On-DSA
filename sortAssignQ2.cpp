#include <iostream>
#include<climits>

using namespace std;

void bubbleSort(int *arr, int n) {
    for(int i = 0; i<n; i++) {
        for(int j = 0; j<n-i-1; j++) {
            if(arr[j] < arr[j+1]) {
                swap(arr[j], arr[j+1]);
            }
        }
    }
}

void selectionSort(int *arr, int n) {
    for(int i = 0; i<n-1; i++) {
        int min = i;
        for(int j = i+1; j<n; j++) {
            if(arr[j] > arr[min]) {
                min = j;
            }
        }
        swap(arr[i], arr[min]);
    }
}

void insertionSort(int *arr, int n) {
    for(int i = 1; i<n; i++) {
        int curr = arr[i];
        int prev = i-1;
        while(prev >= 0 && arr[prev] < curr) {
            swap(arr[prev], arr[prev+1]);
            prev--;
        }
    }
}

void countingSort(int *arr, int n) {
    int freq[10000], minVal = INT_MAX, maxVal = INT_MIN;
    for(int i = 0; i<n; i++) {
        freq[arr[i]]++;
        minVal = min(arr[i], minVal);
        maxVal = max(arr[i], maxVal);
    }
    for(int i = maxVal, j = 0; i>=minVal; i--) {
        while(freq[i] > 0){
            arr[j++] = i;
            freq[i]--;
        }
    }
}

void printArr(int *arr, int n) {
    for(int i = 0; i<n; i++) {
        cout<<arr[i]<<" ";
    }
    cout<<"\n";
}

int main() {
    int arr[] = {3, 6, 2, 1, 8, 7, 4, 5, 3, 1};
    int n = sizeof(arr) / sizeof(int);
    bubbleSort(arr, n);
    cout<<"The array sorted using Bubble Sort is :"<<"\n";
    printArr(arr, n);
    selectionSort(arr, n);
    cout<<"The array sorted using Selection Sort is :"<<"\n";
    printArr(arr, n);
    insertionSort(arr, n);
    cout<<"The array sorted using Insertion Sort is :"<<"\n";
    printArr(arr, n);
    countingSort(arr, n);
    cout<<"The array sorted using Counting Sort is :"<<"\n";
    printArr(arr, n);
    return 0;
}