#include <iostream>

using namespace std;

void checkPrime(int num) {
    int c=0;
    for(int i=2; i<num; i++) {
        if(num%i == 0) {
            c++;
        }
    }
    if(c==0) {
        cout<<"The number is prime";
    } else {
        cout<<"The number is not prime";
    }
}

int main() {
    int num;
    cout<<"Enter the number to check for prime : ";
    cin>>num;
    checkPrime(num);
    return 0;
}