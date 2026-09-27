#include <iostream>

using namespace std;

bool containsDuplicate(int *arr, int n) {
    for(int i = 0; i<n; i++) {
        for(int j = i+1; j<n; j++) {
            if(arr[i] == arr[j]) {
                return true;
            }
        }
    }
    return false;
}

int main() {
    int n;
    cout<<"Enter the size of array : ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of array : ";
    for(int i = 0; i<n; i++) {
        cin>>arr[i];
    }
    if(containsDuplicate(arr, n)) {
        cout<<"true";
    } else {
        cout<<"false";
    }
    return 0;
}