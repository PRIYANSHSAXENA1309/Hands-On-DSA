#include <iostream>

using namespace std;

int searchTarget(int *arr, int n, int target) {
    int start = 0, end = n-1;
    while(start <= end) {
        int mid = (start + end) / 2;
        if(arr[mid] == target) {
            return mid;
        } else if(arr[start] < arr[mid]) {
            if(arr[start] <= target && target < arr[mid]) {
                end = mid -1;
            } else {
                start = mid + 1;
            }
        } else {
            if(arr[mid] < target && target <= arr[end]) {
                start = mid + 1;
            } else {
                end = mid - 1;
            }
        }
    }
    return -1;
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
    int target;
    cout<<"Enter the value of target : ";
    cin>>target;
    cout<<searchTarget(arr, n, target);
    return 0;
}