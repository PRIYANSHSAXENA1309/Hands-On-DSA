#include <iostream>

using namespace std;

int main() {
    int num, num1, res = 0;
    cout<<"Enter a number : ";
    cin>>num;
    num1 = num;
    while(num1>0) {
        int temp = num1 % 10;
        res = res + (temp*temp*temp);
        num1 = num1 / 10;
    }
    if (num == res) {
        cout<<"Number is a armstrong number";
    } else {
        cout<<"Number is not a armstrong number";
    }
    return 0;
}