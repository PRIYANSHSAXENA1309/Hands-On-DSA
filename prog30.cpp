#include <iostream>

using namespace std;

bool checkPrime(int num) {
    int c=0;
    for(int i=2; i<num; i++) {
        if(num%i == 0){
            c++;
        }
    }
    if(c == 0) {
        return true;
    } else {
        return false;
    }
}

int main() {
    int num;
    cout<<"Enter the number to find prime in range 2 to n : ";
    cin>>num;
    cout<<"The prime number in the range 2 to n are : "<<"\n";
    for(int i=2; i<=num; i++) {
        bool ans = checkPrime(i);
        if (ans) {
            cout<<i<<"\n";
        }
    }
    return 0;
}