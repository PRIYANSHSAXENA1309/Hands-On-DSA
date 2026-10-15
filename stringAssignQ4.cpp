#include <iostream>
#include<string>

using namespace std;

bool areValidParenthesis(string exp) {
    string str = "";
    for(char ch : exp){
        if(ch == '[' || ch == '{' || ch == '(') {
            str.push_back(ch);
        } else if(ch == ']' || ch == '}' || ch == ')') {
            if(str.empty()) {
                return false;
            }
            if((ch == ']' && str.back() == '[') ||
            (ch == '}' && str.back() == '{') ||
            (ch == ')' && str.back() == '(')) {
                str.pop_back();
            } else {
                return false;
            }
        }
    }
    return str.empty();
}

int main() {
    string exp;
    cout<<"Enter a expression to check valid parenthesis : ";
    getline(cin, exp);
    cout<<areValidParenthesis(exp);
    return 0;
}