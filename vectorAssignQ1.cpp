#include <iostream>
#include<vector>

using namespace std;

vector<int> findErrorNums(vector<int> nums){
    vector<int> ans, freq(nums.size()+1, 0);
    for(int i=0; i<nums.size(); i++){
        if(freq[nums[i]]){
            ans.push_back(nums[i]);
        }
        freq[nums[i]]++;
    }
    for(int i=1; i<freq.size(); i++){
        if(!freq[i]){
            ans.push_back(i);
        }
    }
    return ans;
}

int main() {
    int n;
    cout<<"Enter the size of vector : ";
    cin>>n;
    vector<int> nums(n);
    for(int i=0; i<n; i++){
        cout<<"Enter the "<<i<<"th element of vector : ";
        cin>>nums[i];
    }
    for(int i : findErrorNums(nums)) cout<<i<<" ";
    return 0;
}