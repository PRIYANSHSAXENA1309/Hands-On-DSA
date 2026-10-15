#include <iostream>

using namespace std;

int main() {
    int n, m;
    cout<<"Enter the no. of rows in 2D array : ";
    cin>>n;
    cout<<"Enter the no. of columns in 2D array : ";
    cin>>m;
    int arr[n][m];
    for(int i = 0; i<n; i++) {
        for(int j = 0; j<m; j++) {
            cout<<"Enter the value of "<<i<<"th row and "<<j<<"th column : ";
            cin>>arr[i][j];
        }
    }
    cout<<"The elements of 2D array are :"<<"\n";
    for(int i = 0; i<n; i++) {
        for(int j = 0; j<m; j++) {
            cout<<arr[i][j]<<" ";
        }
        cout<<"\n";
    }
    return 0;
}