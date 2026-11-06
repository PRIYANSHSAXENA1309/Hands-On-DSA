#include <iostream>
#include<vector>
#include<algorithm>

using namespace std;

vector<vector <int>> findTriplets(vector<int> nums){
    vector<vector <int>> ans;
    sort(nums.begin(), nums.end());

    for(int i=0; i<nums.size(); i++){
        if(i>0 && nums[i]==nums[i-1]){
            continue;
        }
        int j=i+1, k=nums.size()-1;
        while(j<k){
            int sum = nums[i]+nums[j]+nums[k];
            if(sum < 0){
                j++;
            } else if(sum > 0){
                k--;
            } else {
                vector<int> temp = {nums[i], nums[j], nums[k]};
                ans.push_back(temp);
                j++;
                k--;

                while(j<k && nums[j] == nums[j-1]){
                    j++;
                }

                while(j<k && nums[k] == nums[k+1]){
                    k--;
                }
            }
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
    cout<<"All possibel triplets are : \n";
    for(vector<int> i : findTriplets(nums)){
        for(int j : i) cout<<j<<" ";
        cout<<"\n";
    }
    return 0;
}