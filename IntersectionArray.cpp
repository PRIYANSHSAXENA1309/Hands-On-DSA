#include <iostream>
using namespace std;

void unique(int arr1[],int size1,int arr2[],int size2){
    cout<<"The intersection of array 1 and array 2 is: ";
    for(int i=0;i<size1;i++){
        int temp=arr1[i];
        int flag=0;
        for(int j=0;j<size2;j++){
            if(temp==arr2[j]){
                flag++;
            }
        }
        if(flag==1){
            cout<<temp<<" ";
        }
    }
}

int main(){
    int size1, size2;
    cout<<"Enter the number of elements in 1st array."<<endl;
    cin>>size1;
    int arr1[size1];
    for(int i=0;i<size1;i++){
        cout<<"Enter the element: ";
        cin>>arr1[i];
    }
    cout<<"Enter the number of elements in 2nd array."<<endl;
    cin>>size2;
    int arr2[size2];
    for(int i=0;i<size2;i++){
        cout<<"Enter the element: ";
        cin>>arr2[i];
    }
    unique(arr1,size1,arr2,size2);
    return 0;
}