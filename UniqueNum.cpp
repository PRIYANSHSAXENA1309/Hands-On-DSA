#include <iostream>
using namespace std;

void unique(int arr[],int size){
    for(int i=0;i<size;i++){
        int temp=arr[i];
        int flag=0;
        for(int j=0;j<size;j++){
            if(temp==arr[j]){
                flag++;
            }
        }
        if(flag==1){
            cout<<"The unique element is: "<<temp<<endl;
        }
    }
}

int main(){
    cout<<"Enter the number of elements in array."<<endl;
    int size;
    cin>>size;
    int arr[size];
    for(int i=0;i<size;i++){
        cout<<"Enter the element: ";
        cin>>arr[i];
    }
    unique(arr,size);
    return 0;
}