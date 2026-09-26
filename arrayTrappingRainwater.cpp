#include <iostream>
#include<climits>

using namespace std;

void trappingRainwater(int *arr, int n) {
    int leftMax[n], rightMax[n];
    leftMax[0] = arr[0];
    rightMax[n-1] = arr[n-1];
    int trappedWater = 0;
    for(int i = 1; i<n; i++) {
        leftMax[i] = max(leftMax[i-1], arr[i-1]);
    }
    for(int i = n-2; i>=0; i--) {
        rightMax[i] = max(rightMax[i+1], arr[i+1]);
    }
    for(int i = 0; i<n; i++) {
        int currWater = min(leftMax[i], rightMax[i]) - arr[i];
        if(currWater > 0) {
            trappedWater += currWater;
        }
    }
    cout<<"The trapped water is : "<<trappedWater;
}

int main() {
    int heights[] = {4, 2, 0, 6, 3, 2, 5};
    int n = sizeof(heights) / sizeof(int);
    trappingRainwater(heights, n);
    return 0;
}