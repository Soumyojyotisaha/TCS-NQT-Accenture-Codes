#include <bits/stdc++.h>
using namespace std;

long count(vector<int>& arr, int ind, int T, vector<vector<long>>& dp) {
    if (ind == 0) {
        // Base case: check if T can be formed using multiples of arr[0]
        return (T % arr[0] == 0);
    }
    
    if (dp[ind][T] != -1) {
        return dp[ind][T]; // Return if already computed
    }

    long nottaken = count(arr, ind - 1, T, dp); // Do not take the coin
    long taken = 0;
    
    // Take the coin if it's smaller than or equal to the target sum
    if (arr[ind] <= T) {
        taken = count(arr, ind, T - arr[ind], dp);
    }
    
    // Store the result in dp array and return
    return dp[ind][T] = taken + nottaken;
}

long coin(vector<int>& arr, int n, int T) {
    vector<vector<long>> dp(n, vector<long>(T + 1, -1)); // Correct dp initialization
    return count(arr, n - 1, T, dp);
}

int main() {
    vector<int> arr = {1, 2, 3};
    int T = 4;
    int n = arr.size();

    cout << "The total number of ways is " << coin(arr, n, T) << endl;

    return 0;
}
