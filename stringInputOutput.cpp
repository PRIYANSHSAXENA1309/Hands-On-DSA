#include <iostream>
#include<string>

using namespace std;

int main() {
    string str1 = "Hello World!";
    int len = str1.length();
    cout<<str1<<"\n";
    cout<<len<<"\n";
    string str2;
    cout<<"Enter a string : ";
    getline(cin, str2);
    for(int i=0; i<str2.length(); i++) {
        cout<<str2[i];
    }
    cout<<"\n";
    for(char ch : str2) {
        cout<<ch;
    }
    return 0;
}