#include <iostream>

using namespace std;

int main() {
    int year;
    cout<<"Enter a year : ";
    cin>>year;
    if(year % 4 == 0 || year % 400 == 0) {
        cout<<"Year is a leap year.";
    } else {
        cout<<"Year is not a leap year";
    }
    return 0;
}