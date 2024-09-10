#include <bits/stdc++.h>
using namespace std;

int main() {
    int n = 6;
    int arr[] = {20, 15, 26, 2, 98, 6};

    for (int i = 0; i < n; i++) {
        set<int> s;
        // Iterate through each element to compare
        for (int j = 0; j < n; j++) {
            if (arr[j] < arr[i]) {
                s.insert(arr[j]);
            }
        }
        // Print the size of the set + 1
        cout << s.size() + 1 << " ";
    }

    return 0;
}
