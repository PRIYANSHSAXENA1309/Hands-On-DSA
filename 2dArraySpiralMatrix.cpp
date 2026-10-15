#include <iostream>

using namespace std;

void printSpiralMatrix(int arr[][4], int n, int m) {
    int srow = 0, scolumn = 0;
    int endrow = n-1, endcolumn = m-1;
    while(srow <= endrow && scolumn <= endcolumn){
        for(int i = scolumn; i<endcolumn; i++) {
            cout<<arr[srow][i];
        }
        for(int i = srow; i < endrow; i++) {
            cout<<arr[i][endcolumn];
        }
        for(int i = endcolumn; i > scolumn; i--) {
            if(srow == endrow) {
                continue;
            }
            cout<<arr[endrow][i];
        }
        for(int i = endrow; i > srow; i--){
            if(scolumn == endcolumn) {
                continue;
            }
            cout<<arr[i][scolumn];
        }
        srow++, scolumn++;
        endrow--, endcolumn--;
    }
}

int main() {
    int arr[4][4] = {{1, 2, 3, 4},
                    {5, 6, 7, 8},
                    {9, 10, 11, 12},
                    {13, 14, 15, 16}};
    printSpiralMatrix(arr, 4, 4);
    return 0;
}