#include <iostream>
#include<vector>

using namespace std;

vector<int> pairSum(vector<int> vec, int target){
    vector<int> res;
    for(int i=0; i<vec.size(); i++){
        for(int j=i+1; j<vec.size(); j++){
            if((vec[i]+vec[j]) == target){
                res.push_back(i);
                res.push_back(j);
                return res;
            }
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