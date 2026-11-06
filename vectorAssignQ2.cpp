#include <iostream>
#include<vector>

using namespace std;

int findMostWater(vector<int> heights){
    int st = 0, end = heights.size()-1, maxWater = 0;
    while(st<end){
        int currentWater = min(heights[st], heights[end]) * (end-st);
        maxWater = max(currentWater, maxWater);
        if(heights[st]<heights[end]){
            st++;
        } else {
            end--;
        }
    }
    return maxWater;
}

int main() {
    int n;
    cout<<"Enter the size of vector : ";
    cin>>n;
    vector<int> heights(n);
    for(int i=0; i<n; i++){
        cout<<"Enter the "<<i<<"th element of vector : ";
        cin>>heights[i];
    }
    cout<<"The maximum water that container can have is : "<<findMostWater(heights);
    return 0;
}