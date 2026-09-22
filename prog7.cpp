#include <iostream>

using namespace std;

int main() {
    float income, tax;
    cout<<"Enter the income in Rs : ";
    cin>>income;
    if (income<500000) {
        tax=0;
    } else if (income>500000 && income<1000000) {
        tax = 0.2*income;
    } else if (income>1000000) {
        tax = 0.3*income;
    }
    cout<<"The tax is : "<<tax;
    return 0;
}