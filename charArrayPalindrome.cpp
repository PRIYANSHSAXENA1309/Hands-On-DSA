#include <iostream>
#include<cstring>

using namespace std;

bool isPalindrome(char word[], int n) {
    int start = 0, end = n-1;
    while(start < end) {
        if(word[start++] != word[end--]) {
            cout<<"Word is not a Palindrome";
            return false;
        }
    }
    cout<<"Word is a valid Palindrome";
    return true;
}

int main() {
    char word[100];
    cout<<"Enter the word : ";
    cin.getline(word, 100);
    isPalindrome(word, strlen(word));
    return 0;
}