#include <iostream>

using namespace std;

int count7s(int (*arr)[3], int n, int m) {
    int count = 0;
    for(int i = 0; i<n; i++) {
        for(int j = 0; j<m; j++) {
            if(arr[i][j] == 7) {
                count++;
            }
        }
    }
    return count;
}

int main() {
    int arr[2][3] = {{4, 7, 8}, {8, 8, 7}};
    int res = count7s(arr, 2, 3);
    cout<<"The number of 7's are : "<<res;
    return 0;
}