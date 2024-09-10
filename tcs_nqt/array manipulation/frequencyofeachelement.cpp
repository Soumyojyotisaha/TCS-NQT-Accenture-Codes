#include <bits/stdc++.h>
using namespace std;

void countFreq(int arr[], int n) {
    // Create a map to store frequencies of elements
    map<int, int> freqMap;

    // Count frequencies
    for (int i = 0; i < n; i++) {
        freqMap[arr[i]]++;
    }

    // Display frequencies
    for (auto it : freqMap) {
        cout << it.first << " " << it.second << endl;
    }
}

int main() {
    int arr[] = {10, 5, 10, 15, 10, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    countFreq(arr, n);
    return 0;
}
