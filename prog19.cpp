#include <iostream>

using namespace std;

int main() {
    int num;
    cout<<"Enter the number to print its table : ";
    cin>>num;
    for (int i=1; i<=10; i++) {
        cout<<num<<" X "<<i<<" = "<<(num*i)<<"\n";
    }
    return 0;
}