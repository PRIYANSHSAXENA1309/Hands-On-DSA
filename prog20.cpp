#include <iostream>

using namespace std;

int main() {
    int num;
    cout<<"Enter the number greater than or equal to 2 : ";
    cin>>num;
    cout<<"The prime numbers from 2 to N are : "<<"\n";
    for(int i=2; i<=num; i++) {
        int c=0;
        for(int j=2; j<i; j++) {
            if(i%j == 0) {
                c++;
            }
        }
        if(c == 0) {
            cout<<i<<"\n";
        }
    }
    return 0;
}