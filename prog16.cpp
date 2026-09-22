#include <iostream>

using namespace std;

int main() {
    int num;
    while(true) {
        cout<<"Enter a number : ";
        cin>>num;
        if (num % 10 == 0) {
            break;
        }
    }
    return 0;
}