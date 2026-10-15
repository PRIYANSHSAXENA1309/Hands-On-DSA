#include <iostream>
#include<string>

using namespace std;

bool isValidAnagram(string str1, string str2) {
    int freq[26] = {0};
    if(str1.length() != str2.length()) {
        cout<<"String 1 and 2 are not valid anagram.";
        return false;
    }
    for(int i=0; i<str1.length(); i++) {
        int idx = str1[i] - 'a';
        freq[idx]++;
    }
    for(int i=0; i<str2.length(); i++) {
        int idx = str2[i] - 'a';
        if(freq[idx] == 0) {
            cout<<"String 1 and 2 are not valid anagram.";
            return false;
        }
        freq[idx]--;
    }
    cout<<"String 1 and 2 are valid anagram.";
    return true;
}

int main() {
    string str1 = "listen", str2 = "silent";
    isValidAnagram(str1, str2);
    return 0;
}