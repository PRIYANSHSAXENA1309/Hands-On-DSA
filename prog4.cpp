#include <iostream>

using namespace std;

int main() {
    const float PI = 3.14;
    float radius, area;
    cout<<"Enter the radius of the circle : ";
    cin>>radius;
    area = PI * radius * radius;
    cout<<"The area of the circle is : "<<area;
    return 0;
}