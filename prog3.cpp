#include <iostream>

using namespace std;

int main() {
    float principle, rate, time, si;
    int years, months;
    cout<<"Enter the principle value : ";
    cin>>principle;
    cout<<"Enter the rate of interest(%) : ";
    cin>>rate;
    cout<<"Enter the time : "<<"\n";
    cout<<"     Years : ";
    cin>>years;
    cout<<"     Months : ";
    cin>>months;
    time = years + (months/12);
    si = (principle * rate * time)/100;
    cout<<"The simple interest is : "<<si;
    return 0;
}