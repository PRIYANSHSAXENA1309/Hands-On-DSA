#include <iostream>

using namespace std;

int main() {
    int *a = new int;
    *a = 5;
    cout<<*a<<"\n";

    int *arr = new int[100];
    *(arr + 0) = 1;
    *(arr + 1) = 2;
    *(arr + 2) = 3;
    *(arr + 3) = 4;
    *(arr + 4) = 5;
    for(int i = 0; i < 5; i++){
        cout<<*(arr + i)<<" ";
    }
    delete a;
    delete[] arr;
    a = nullptr;
    arr = nullptr;

    return 0;
}