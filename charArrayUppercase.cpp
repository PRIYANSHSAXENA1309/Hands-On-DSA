#include <iostream>
#include<cstring>

using namespace std;

void toUppercase(char word[], int n) {
    for (int i=0; i<n; i++) {
        char ch = word[i];
        if(ch>='a' && ch<='z') {
            word[i] = ch - 'a' + 'A';
        } else {
            continue;
        }
    }
}

int main() {
    char word[100];
    cout<<"Enter the word : ";
    cin.getline(word, 100);
    toUppercase(word, strlen(word));
    cout<<word;
    return 0;
}