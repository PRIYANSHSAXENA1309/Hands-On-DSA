#include <iostream>

using namespace std;

int binSearch(int *arr, int n, int key) {
    int start = 0, end = n-1;
    while(start <= end) {
        int mid = (start + end) / 2;
        if(arr[mid] == key) {
            return mid;
        } else if(key < arr[mid]) {
            end = mid - 1;
        } else if(key > arr[mid]) {
            start = mid + 1;
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
    int idx = binSearch(arr, n, key);
    if(idx != -1) {
        cout<<"The value is found at index "<<idx;
    } else {
        cout<<"The value is not found at any index";
    }
    return 0;
}