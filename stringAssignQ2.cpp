#include <iostream>
#include<string>

using namespace std;

bool areAlmostEqual(string str1, string str2) {
    if(str1.length() != str2.length()) {
        return false;
    }
    char ch1, ch2;
    int count = 0;
    for(int i=0; i<str1.length(); i++) {
        if(str1[i] != str2[i]) {
            if(count == 0) {
                ch1 = str1[i];
                ch2 = str2[i];
            } else {
                if(str1[i] != ch2 || str2[i] != ch1){
                    return false;
                }
            }
            count++;
        }
        if(count > 2){
            return false;
        }
    }
    if(count == 1) {
        return false;
    }
    return true;
}

int main() {
    string str1, str2;
    cout<<"Enter the 1st string : ";
    getline(cin, str1);
    cout<<"Enter the 2nd string : ";
    getline(cin, str2);
    cout<<areAlmostEqual(str1, str2);
    return 0;
}