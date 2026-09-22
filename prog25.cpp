#include <iostream>

using namespace std;

void product(float a, float b) {
    cout<<"The product of given two numbers is : "<<a*b;
}

int main() {
    float num1, num2;
    cout<<"Enter the first number : ";
    cin>>num1;
    cout<<"Enter the second number : ";
    cin>>num2;
    product(num1, num2);
    return 0;
}