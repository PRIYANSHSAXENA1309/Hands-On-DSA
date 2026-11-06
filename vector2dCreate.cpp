#include <iostream>
#include<vector>

using namespace std;

int main() {
    vector<vector<int>> matrix(3, vector<int>(3));
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cout<<"Enter the "<<i+1<<"th row and "<<j+1<<"th column element : ";
            cin>>matrix[i][j];
        }
    }
    cout<<"The 2d vector is : "<<"\n";
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<"\n";
    }
    return 0;
}