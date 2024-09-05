#include <bits/stdc++.h>
using namespace std;

int count(int arr[], int n) {
    unordered_map<int, int> freqMap;

    // Counting frequencies
    for (int i = 0; i < n; i++) {
        freqMap[arr[i]]++;
    }

    // If fewer than two unique elements, return 0
    if (freqMap.size() < 2) {
        return 0; 
    }

    // Convert unordered_map to vector of pairs
    vector<pair<int, int>> freqVector(freqMap.begin(), freqMap.end());

    // Return the frequency of the second-to-last unique element
    return freqVector[freqVector.size() - 2].second;
}

int main() {
    int arr[] = {5, 4, 4, 4, 4};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << count(arr, n) << endl; // Expected Output: 3 (frequency of 3)
    return 0;
}
