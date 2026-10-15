#include <iostream>

using namespace std;

void transposeMatrix(int (*arr)[4], int n, int m){
    int transpose[n][m] = {{0}};
    for(int i = 0; i<n; i++) {
        for(int j = 0; j<m ; j++) {
            transpose[i][j] = arr[j][i];
        }
    }
    cout<<"The transpose of a matrix is :"<<"\n";
    for(int i = 0; i<n; i++) {
        for(int j = 0; j<m ; j++) {
            cout<<transpose[i][j]<<" ";
        }
        cout<<"\n";
    }
}

int main() {
    int arr[4][4] = {{1, 2, 3, 4},
                    {5, 6, 7, 8},
                    {9, 10, 11, 12},
                    {13, 14, 15, 16}};
    transposeMatrix(arr, 4, 4);
    return 0;
}