#include <iostream>

using namespace std;

int searchSorted(int arr[][4], int n, int m, int key) {
    for(int i = 0; i<n; i++) {
        for(int j = 0; j<m; j++) {
            if(arr[i][j] == key) {
                cout<<"The elements are found at "<<i<<"th row and "<<j<<"th column.";
            }
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