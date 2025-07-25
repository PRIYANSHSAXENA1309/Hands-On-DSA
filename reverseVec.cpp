# include <iostream>
# include <vector>
using namespace std;
void reverse(vector<int> vec){
    int start=0;
    int end=vec.size()-1;
    while(start<end){
        swap(vec[start],vec[end]);
        start++;
        end--;
    }
    cout<<"The vector after reverse is: ";
    for(int i: vec){ cout<<i<<" "; }
}
int main(){
    vector <int> vec;
    int i=0;
    char ch='y';
    while(ch=='y'){
        int temp;
        cout<<"Enter element in vector: ";
        cin>>temp;
        vec.push_back(temp);
        i++;
        cout<<"Enter y to continue n to exit: ";
        cin>>ch;
    }
    reverse(vec);
    return 0;
}