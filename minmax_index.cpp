# include <iostream>
using namespace std;

void minmax(int arr[],int size){
    int min=arr[0];
    int max=arr[0];
    int min_in=0;
    int max_in=0;
    for(int j=0;j<size;j++){
        if(min>arr[j]){
            min=arr[j];
            min_in=j;
        }
        if(max<arr[j]){
            max=arr[j];
            max_in=j;
        }
    }
    cout<<"The maximum element is: "<<max<<endl;
    cout<<"The index of maximum element is: "<<max_in<<endl;
    cout<<"The minimum element is: "<<min<<endl;
    cout<<"The index of minimum element is: "<<min_in<<endl;
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
    minmax(arr,size);
    return 0;
}