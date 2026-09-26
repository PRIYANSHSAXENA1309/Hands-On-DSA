#include <iostream>

using namespace std;

int linSearch(int *arr, int n, int key) {
    for(int i = 0; i<n; i++) {
        if(arr[i] == key) {
            return i;
        }
    }
    return -1;
}

int main() {
    int arr[] = {5, 4, 7, 3, 9, 2};
    int n = sizeof(arr) / sizeof(int);
    int key;
    cout<<"Enter the value to be searched : ";
    cin>>key;
    int idx = linSearch(arr, n, key);
    if(idx != -1) {
        cout<<"The value is found at index "<<idx;
    } else {
        cout<<"The value is not found at any index";
    }
    return 0;
}