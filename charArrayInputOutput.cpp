#include <iostream>
#include <cstring>

using namespace std;

int main() {
    char arr[10], arr1[10];
    cout<<"Enter the value of first string : ";
    cin>>arr;
    cin.ignore();
    cout<<arr<<"\n";
    cout<<"Enter the value of second string : ";
    cin.getline(arr1, 11);
    for(int i=0; i<=strlen(arr1); i++) {
        cout<<arr1[i];
    }    
    return 0;
}