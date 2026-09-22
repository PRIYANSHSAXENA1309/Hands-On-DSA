#include <iostream>

using namespace std;

int fact(int num) {
    int ans=1;
    for(int i=1; i<=num; i++) {
        ans = ans*i;
    }
    return ans;
}

void binCoeff(int n, int r){
    float ans = fact(n)/(fact(n-r)*fact(r));
    cout<<"The binomial coefficient of given n and r is : "<<ans;
}

int main() {
    int n, r;
    cout<<"Enter the value of n and r to find binomial coefficient"<<"\n";
    cout<<"Enter the value of n : ";
    cin>>n;
    cout<<"Enter the value of r : ";
    cin>>r;
    binCoeff(n, r);
    return 0;
}