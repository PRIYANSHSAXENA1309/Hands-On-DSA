#include <iostream>

using namespace std;

int main() {
    int arr[10];
    int n = sizeof(arr) / sizeof(int);
    for(int i = 0; i < n; i++) {
        cout<<"Enter the "<<i<<" element of array : ";
        cin>>arr[i];
    }
    cout<<"The elements of array are : "<<"\n";
    for(int i = 0; i < n; i++) {
        cout<<arr[i]<<"\n";
    }
    return 0;
}