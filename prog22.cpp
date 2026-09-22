#include <iostream>

using namespace std;

int main() {
    for(int i=1; i<=5; i++) {
        bool c;
        if(i%2 == 0) {
            c = false;
        } else {
            c = true;
        }
        for(int j=1; j<=i; j++) {
            if(c){
                cout<<"1";
                c = !c;
            } else {
                cout<<"0";
                c = !c;
            }
        }
        cout<<"\n";
    }
    return 0;
}