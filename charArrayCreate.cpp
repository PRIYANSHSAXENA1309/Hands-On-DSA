#include <iostream>

using namespace std;

int main() {
    char work1[] = "code";
    char work2[] = {'c', 'o', 'd', 'e', '\0'};
    char work3[5] = "code";
    char work4[50] = {'c', 'o', 'd', 'e', '\0'};
    cout<<work1<<"\n";
    cout<<work2<<"\n";
    cout<<work3<<"\n";
    cout<<work4<<"\n";
    return 0;
}