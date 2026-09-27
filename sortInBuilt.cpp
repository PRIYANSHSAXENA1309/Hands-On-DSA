#include <iostream>
#include<algorithm>

using namespace std;

void printArr(int *arr, int n) {
    for(int i = 0; i<n; i++) {
        cout<<arr[i]<<" ";
    }
    cout<<"\n";
}

int main() {
    int arr[] = {5, 4, 7, 3, 9, 2};
    int n = sizeof(arr) / sizeof(int);
    sort(arr, arr+n);
    cout<<"The array sorted in ascending order is : ";
    printArr(arr, n);
    sort(arr, arr+n, greater<int>());
    cout<<"The array sorted in descending order is : ";
    printArr(arr, n);
    return 0;
}