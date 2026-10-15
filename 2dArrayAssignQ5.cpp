#include <iostream>

using namespace std;

void rotate2dArrayBy90(int (*arr)[3], int n, int m) {
    for(int i=0; i<n; i++) {
        for(int j=i+1; j<m; j++) {
            swap(arr[i][j], arr[j][i]);
        }
    }
    for(int i=0; i<n; i++) {
        int j=0;
        while(j<(m-j-1)) {
            swap(arr[i][j], arr[i][m-j-1]);
            j++;
        }
    }
}

int main() {
    int arr[3][3] = {{1, 2, 3},
                    {4, 5, 6},
                    {7, 8, 9}};
    rotate2dArrayBy90(arr, 3, 3);
    cout<<"The matrix after rotating 90 is : \n";
    for(int i=0; i<3; i++) {
        for(int j=0; j<3; j++) {
            cout<<arr[i][j]<<" ";
        }
        cout<<"\n";
    }
    return 0;
}