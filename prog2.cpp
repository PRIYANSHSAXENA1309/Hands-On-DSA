#include <iostream>

using namespace std;

int main() {
    float costPen, costPencil, costEraser, costTotal, costFinal;
    cout<<"Enter cost of Pen : ";
    cin>>costPen;
    cout<<"Enter the cost of Pencil : ";
    cin>>costPencil;
    cout<<"Enter the cost of Eraser : ";
    cin>>costEraser;
    costTotal = costPen + costPencil + costEraser;
    costFinal = costTotal + (0.18*costTotal);
    cout<<"Total cost including gst is : "<<costFinal;
    return 0;
}