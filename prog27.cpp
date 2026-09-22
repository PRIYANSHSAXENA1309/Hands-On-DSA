#include <iostream>

using namespace std;

void factorial(int num) {
    int fact = 1;
    for(int i=1; i<=num; i++) {
        fact = fact*i;
    }
    cout<<"The factorial of given number is : "<<fact;
}

int main() {
    int num;
    cout<<"Enter the number to find its factorial : ";
    cin>>num;
    factorial(num);
    return 0;
}