#include <iostream>

using namespace std;

void calculate(int a, int b) {
    int res = (a*a+b*b+2*a*b);
    cout<<"The a plus b whole square for given a and b is : "<<res;
}

int main() {
    int a, b;
    cout<<"Enter the value of a and b to find its a plus b whole square : "<<"\n";
    cout<<"Enter the value of a : ";
    cin>>a;
    cout<<"Enter the value of b : ";
    cin>>b;
    calculate(a, b);
    return 0;
}