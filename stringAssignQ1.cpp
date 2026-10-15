#include <iostream>

using namespace std;

int countLowerCaseVowel(string str) {
    int vowel = 0;
    for(int i=0; i<str.length(); i++) {
        if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u') {
            vowel++;
        }
    }
    return vowel;
}

int main() {
    string str;
    cout<<"Enter a string : ";
    getline(cin, str);
    cout<<"Total count of lowercase vowel are : "<<countLowerCaseVowel(str);
    return 0;
}