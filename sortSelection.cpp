#include <iostream>

using namespace std;

void printArr(int *arr, int n) {
    for(int i = 0; i<n; i++) {
        cout<<arr[i]<<" ";
    }
}

void selectionSort(int *arr, int n) {
    for(int i = 0; i<n-1; i++) {
        int min = i;
        for(int j = i+1; j<n; j++) {
            if(arr[j] < arr[min]) {
                min = j;
            }
        }
        swap(arr[i], arr[min]);
    }
}

int main() {
    int arr[] = {4, 5, 7, 3, 9, 2};
    int n = sizeof(arr) / sizeof(int);
    selectionSort(arr, n);
    printArr(arr, n);
    return 0;
}