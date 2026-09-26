#include <iostream>

using namespace std;

void arrPrint(int *arr, int n) {
    for(int i = 0; i<n; i++) {
        cout<<arr[i]<<"\n";
    }
}

int main() {
    int arr[] = {5, 4, 7, 3, 9, 2};
    int n = sizeof(arr) / sizeof(int);
    cout<<"The array is :"<<"\n";
    arrPrint(arr, n);
    int arrCopy[n];
    for(int i = 0; i<n; i++) {
        arrCopy[i] = arr[n-i-1];
    }
    for(int i = 0; i<n; i++) {
        arr[i] = arrCopy[i];
    }
    cout<<"The array in reverse order is :"<<"\n";
    arrPrint(arr, n);
    return 0;
}