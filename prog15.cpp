#include <iostream>

using namespace std;

int main() {
    int num, sum = 0;
    cout<<"Enter a number : ";
    cin>>num;
    while(num>0) {
        int temp = num%10;
        if (temp % 2 != 0) {
            sum = sum + temp;
        }
        num = num/10;
    }
    cout<<"The sum of the odd digits of the number is : "<<sum;
    return 0;
}