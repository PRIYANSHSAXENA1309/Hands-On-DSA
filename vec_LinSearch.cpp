# include <iostream>
# include <vector>
using namespace std;

void linsearch(vector<int> vec,int elm){
    for(int i=0;i<vec.size();i++){
        if(vec.at(i)==elm){
            cout<<"Element found in vector at index: "<<i;
        }
    }
}

int main(){
    vector<int> vec;
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
    int elm;
    cout<<"Enter element to be searched: ";
    cin>>elm;
    linsearch(vec,elm);
    return 0;
}