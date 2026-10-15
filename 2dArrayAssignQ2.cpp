#include <iostream>

using namespace std;

int sum2ndRow(int (*nums)[3], int n, int m) {
    int sum = 0;
    for(int i = 0; i<m; i++){
        sum += nums[1][i];
    }
    return sum;
}

int main() {
    int nums[3][3] = {{1, 4, 9}, {11, 4, 3}, {2, 2, 3}};
    int res = sum2ndRow(nums, 3, 3);
    cout<<"The sum of the 2nd row of nums array is : "<<res;
    return 0;
}