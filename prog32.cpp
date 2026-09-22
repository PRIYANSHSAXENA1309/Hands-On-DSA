#include <iostream>

using namespace std;

void Sum(int num) {
    int sum = 0, n = num;
    while(n>0) {
        int temp = n%10;
        sum = sum + temp;
        n = n/10;
    }
    cout<<"The sum of the digits of the given number is : "<<sum;
}

int main() {
    int num;
    cout<<"Enter the number to find the sum of its digits : ";
    cin>>num;
    Sum(num);
    return 0;
}