#include <iostream>

using namespace std;

void printSubarray(int *arr, int n) {
    cout<<"The subarrays are : "<<"\n";
    for(int i = 0; i<n; i++) {
        for(int j = i; j<n; j++) {
            for(int k = i; k<=j; k++) {
                cout<<arr[k];
            }
            cout<<", ";
        }
        cout<<"\n";
    }
}

int main() {
    int arr[] = {5, 4, 7, 3, 9, 2};
    int n = sizeof(arr) / sizeof(int);
    printSubarray(arr, n);
    return 0;
}