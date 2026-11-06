#include <iostream>
#include<vector>

using namespace std;

vector<int> pairSum(vector<int> vec, int target){
    vector<int> res;
    int st=0, end=vec.size()-1;
    while(st<end){
        if((vec[st]+vec[end]) == target){
            res.push_back(st);
            res.push_back(end);
            return res;
        } else if((vec[st]+vec[end]) < target){
            st++;
        } else{
            end--;
        }
    }
    return res;
}

int main() {
    int n, target;
    cout<<"Enter the size of vector : ";
    cin>>n;
    vector<int> vec(n);
    cout<<"Enter the elements of vector : ";
    for(int &x : vec) cin>>x;
    cout<<"Enter the target sum : ";
    cin>>target;
    cout<<"The indices pair of target sum is : ";
    for(int &x : pairSum(vec, target)) cout<<x<<" ";
    return 0;
}