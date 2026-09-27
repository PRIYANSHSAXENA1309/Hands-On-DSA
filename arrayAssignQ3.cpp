#include <iostream>

using namespace std;

int maxProduct(int *arr, int n) {
    int maxTillNow = arr[0];
    int minTillNow = arr[0];
    int ans = maxTillNow;
    for(int i = 1; i<n; i++) {
        int curr = arr[i];
        int tempMaxTillNow = max(curr, max(maxTillNow*curr, minTillNow*curr));
        minTillNow = min(curr, min(maxTillNow*curr, minTillNow*curr));
        maxTillNow = tempMaxTillNow;
        ans = max(maxTillNow, ans);
    }
    return ans;
}

int main() {
    int n;
    cout<<"Enter the size of the array : ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of the array : ";
    for(int i = 0; i<n; i++) {
        cin>>arr[i];
    }
    cout<<maxProduct(arr, n);
    return 0;
}