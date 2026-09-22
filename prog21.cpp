#include <iostream>

using namespace std;

int main() {
    int num, a=0, b=1;
    cout<<"Enter the value of N to print fibonacci series : ";
    cin>>num;
    cout<<"The first "<<num<<" fibonacci numbers are : "<<"\n";
    cout<<a<<"\n"<<b<<"\n";
    for(int i=3; i<=num; i++) {
        int sum = a+b;
        a=b;
        b=sum;
        cout<<sum<<"\n";
    }
    return 0;
}