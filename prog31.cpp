#include <iostream>

using namespace std;

void checkPalindrome(int num) {
    int res = 0, n = num;
    while(n>0) {
        int temp = n%10;
        res = res*10 + temp;
        n = n/10;
    }
    if(num == res) {
        cout<<"The number is a palindrome number";
    } else {
        cout<<"The number is not a palindrome number";
    }
}

int main() {
    int num;
    cout<<"Enter a number to check for palindrome : ";
    cin>>num;
    checkPalindrome(num);
    return 0;
}