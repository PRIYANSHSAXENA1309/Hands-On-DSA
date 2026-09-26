#include <iostream>
#include<climits>
using namespace std;

int bestBuySell(int *arr, int n) {
    int bestBuy[n];
    bestBuy[0] = INT_MAX;
    int maxProfit = 0;
    for(int i = 1; i<n; i++) {
        bestBuy[i] = min(bestBuy[i-1], arr[i-1]);
    }
    for(int i = 0; i<n; i++) {
        int currProfit = arr[i] - bestBuy[i];
        maxProfit = max(currProfit, maxProfit);
    }
    return maxProfit;
}

int main() {
    int prices[] = {7, 1, 5, 3, 6, 4};
    int n = sizeof(prices) / sizeof(int);
    int res = bestBuySell(prices, n);
    cout<<"The maximum profit is : "<<res;
    return 0;
}