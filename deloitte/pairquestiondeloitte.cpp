#include <bits/stdc++.h>
using namespace std;

int twosum(vector<int>& arr, int target) {
    int n = arr.size();
    set<pair<int, int>> uniquePairs; // To store unique pairs

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] + arr[j] == target) {
                int first = min(arr[i], arr[j]);
                int second = max(arr[i], arr[j]);
                uniquePairs.insert({first, second});
            }
        }
    }

    return uniquePairs.size(); // Number of unique pairs
}

int main() {
    vector<int> arr = {2, 2, 4, 5};
    int target = 6;
    cout << twosum(arr, target);
    return 0;
}
