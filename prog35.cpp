#include <iostream>

using namespace std;

void nextChar(char ch) {
    if (ch>='a' && ch<'z') {
        cout<<"The next character is : "<<(char)((int)ch + 1);
    } else if(ch == 'z') {
        cout<<"The next character is : "<<'a';
    }
}

int main() {
    char ch;
    cout<<"Enter the character to print its next character : ";
    cin>>ch;
    nextChar(ch);
    return 0;
}