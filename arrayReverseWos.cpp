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
    int start = 0, end = n-1;
    while(start <= end) {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
    cout<<"The array in reverse order is :"<<"\n";
    arrPrint(arr, n);
    return 0;
}