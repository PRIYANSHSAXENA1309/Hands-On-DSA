#include <iostream>

using namespace std;

void checkLarger(int a, int b, int c) {
    if(a>b && a>c) {
        cout<<"The largest number is : "<<a;
    } else if(b>c) {
        cout<<"The largest number is : "<<b;
    } else {
        cout<<"The largest number is : "<<c;
    }
}

int main() {
    int a, b, c;
    cout<<"Enter the val;ue of a, b, c to find the value of larger value : "<<"\n";
    cout<<"Enter the value of a : ";
    cin>>a;
    cout<<"Enter the value of b : ";
    cin>>b;
    cout<<"Enter the value of c : ";
    cin>>c;
    checkLarger(a, b, c);
    return 0;
}