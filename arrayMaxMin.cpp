#include <iostream>

using namespace std;

int main() {
    int arr[] = {5, 4, 3, 2, 1, 6, 7, 8, 9, 10};
    int n = sizeof(arr) / sizeof(int);
    int max = arr[0], min = arr[0];
    for(int i = 0; i < n; i++) {
        if(arr[i] > max) {
            max = arr[i];
        }
        if(arr[i] < min) {
            min = arr[i];
        }
    }
    cout<<"The maximum value of array is : "<<max<<"\n";
    cout<<"The min value of array is : "<<min;
    return 0;
}