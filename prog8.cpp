#include <iostream>

using namespace std;

int main() {
    float num1, num2, res = 0;
    char choice;
    cout<<"Enter the first number : ";
    cin>>num1;
    cout<<"Enter the second number : ";
    cin>>num2;
    cout<<"Choose and enter the operation + - * / : ";
    cin>>choice;
    switch (choice)
    {
    case '+':
        res = num1 + num2;
        break;
    case '-':
        res = num1 - num2;
        break;
    case '*':
        res = num1 * num2;
        break;
    case '/':
        res = num1 / num2;
        break;
    default:
        cout<<"Invalid choice";
        break;
    }
    cout<<"The result of the operation is : "<<res;
    return 0;
}