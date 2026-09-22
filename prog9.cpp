#include <iostream>

using namespace std;

int main() {
    int num;
    cout<<"Enter a number : ";
    cin>>num;
    if(num<0) {
        cout<<"Number is negative";
    } else if(num>0) {
        cout<<"Number is positive";
    } else {
        cout<<"The number is zero";
    }
    return 0;
}