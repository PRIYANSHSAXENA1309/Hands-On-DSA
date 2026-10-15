#include <iostream>

using namespace std;

int (*create2dArray(int *arr, int n, int m, int(*array2D)[2], int length))[2] {
    int idx = 0;
    if(length == (m*n)) {
        for(int i = 0; i<n; i++) {
            for(int j = 0; j<m; j++) {
                array2D[i][j] = arr[idx++];
            }
        }
    } else {
        cout<<"2D array can't be created so returning empty array initialised with 0 \n";
    }
    return array2D;
}

int main() {
    int original[] = {1, 2, 3, 4};
    int length = sizeof(original)/sizeof(int);
    int m=2, n=2;
    int array2D[2][2] = {{0}};
    int (*Array2d)[2] = create2dArray(original, n, m, array2D, length);
    cout<<"The created 2D array is :\n";
    for(int i = 0; i<n; i++) {
        for(int j = 0; j<m; j++) {
            cout<<array2D[i][j];
        }
        cout<<"\n";
    }
    return 0;
}