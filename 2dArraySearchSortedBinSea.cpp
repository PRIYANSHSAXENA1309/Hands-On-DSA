#include <iostream>

using namespace std;

int binSearch(int arr[], int n, int key) {
    int st = 0, end = n-1;
    while(st <= end) {
        int mid = (st + end) / 2;
        if(arr[mid] == key) {
            return mid;
        } else if(key < arr[mid]) {
            end = mid -1;
        } else {
            st = mid + 1;
        }
    }
    return -1;
}

int searchSorted(int arr[][4], int n, int m, int key) {
    for(int i = 0; i<n; i++) {
        int res = binSearch(arr[i], m, key);
        if(res != -1) {
            cout<<"The element is found at "<<i<<"th row and "<<res<<"th column.";
            break;
        }
    }
    return -1;
}

int main() {
    int arr[4][4] = {{1, 2, 3, 4},
                    {5, 6, 7, 8},
                    {9, 10, 11, 12},
                    {13, 14, 15, 16}};
    int key;
    cout<<"Enter the key to be searched : ";
    cin>>key;
    int res = searchSorted(arr, 4, 4, key);
    if(res == -1){
        cout<<"The element is not found at any index.";
    }
    return 0;
}