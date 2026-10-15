#include <iostream>
#include<string>
#include<algorithm>

using namespace std;

bool areClose(string word1, string word2) {
    int freq1[26] = {0}, freq2[26] = {0};
    if(word1.length() != word2.length()) {
        return false;
    }
    for(int i=0; i<word1.length(); i++) {
        freq1[word1[i] - 'a']++;
        freq2[word2[i] - 'a']++;
    }
    for(int i=0; i<26; i++){
        if((freq1[i] == 0) != (freq2[i] == 0)){
            return false;
        }
    }
    sort(freq1, freq1+26);
    sort(freq2, freq2+26);
    for(int i=0; i<26; i++){
        if(freq1[i] != freq2[i]) {
            return false;
        }
    }
    return true;
}

int main() {
    string str1, str2;
    cout<<"Enter the 1st string : ";
    getline(cin, str1);
    cout<<"Enter the 2nd string : ";
    getline(cin, str2);
    cout<<areClose(str1, str2);
    return 0;
}