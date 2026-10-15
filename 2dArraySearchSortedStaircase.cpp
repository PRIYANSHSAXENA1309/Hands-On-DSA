#include <iostream>

using namespace std;

int searchSortedStaircase(int arr[][4], int n, int m, int key) {
    int row = 0, col = m-1;
    while(row < n && col >= 0){
        if(key == arr[row][col]) {
            cout<<"The element is found at "<<row<<" th and "<<col<<" th column";
            return 0;
        } else if(key > arr[row][col]) {
            row++;
        } else {
            col--;
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
    int res = searchSortedStaircase(arr, 4, 4, key);
    if(res == -1){
        cout<<"The element is not found at any index.";
    }
    return 0;
}