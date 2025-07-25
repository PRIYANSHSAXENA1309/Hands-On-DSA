# include <iostream>
using namespace std;

void SumProd(int arr[],int size){
    int sum=0;
    int prod=1;
    for(int i=0;i<size;i++){
        sum+=arr[i];
        prod*=arr[i];
    }
    cout<<"The sum of elements of array is: "<<sum<<endl;
    cout<<"The product of elements of array is: "<<prod<<endl;
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
    SumProd(arr,size);
    return 0;
}