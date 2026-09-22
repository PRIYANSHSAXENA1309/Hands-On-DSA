#include <iostream>

using namespace std;

void check(int num) {
    if(num%2 == 0) {
        cout<<"The number is even";
    } else {
        cout<<"The number is odd";
    }
}

int main() {
    int num;
    cout<<"Enter the number to check the number is even or odd : ";
    cin>>num;
    check(num);
    return 0;
}