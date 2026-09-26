#include <iostream>

using namespace std;

void function(int *arr) {
    cout<<"Inside Function"<<"\n";
    cout<<"Changing value of arr[2] from inside function"<<"\n";
    arr[2] = 20;
    cout<<"The value of arr[2] is : "<<arr[2]<<"\n";
}

int main() {
    int arr[] = {5, 7, 3, 9, 2};
    cout<<"Inside main"<<"\n";
    cout<<"The value of arr[2] is : "<<arr[2]<<"\n";
    function(arr);
    cout<<"Back to main"<<"\n";
    cout<<"The value of arr[2] is : "<<arr[2]<<"\n";
    return 0;
}