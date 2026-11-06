#include <iostream>

using namespace std;

int main() {
    int rows, cols;
    cout<<"Enter the number of rows : ";
    cin>>rows;
    cout<<"Enter the number of rows : ";
    cin>>cols;
    int **matrix = new int *[rows];
    for(int i = 0; i < rows; i++){
        matrix[i] = new int [cols];
    }
    int x = 1;
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            matrix[i][j] = x++;
            cout<<matrix[i][j]<<" ";
        }
        cout<<"\n";
    }
    for(int i = 0; i < rows; i++){
        delete[] matrix[i];
    }
    delete[] matrix;
    matrix = nullptr;
    return 0;
}