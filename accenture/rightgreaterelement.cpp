#include <bits/stdc++.h>
using namespace std;

int great(int arr[], int n) {
    int count = 0;
    int sup = INT_MIN;  // Initialize sup to the smallest possible integer value

    // Traverse the array from the rightmost element to the leftmost
    for (int i = n-1; i >= 0; i--) {
        // If the current element is greater than sup, update sup and increment count
        if (arr[i] > sup) {
            sup = arr[i];
            count++;
        }
    }

    return count;
}

int main() {
    int arr[] = {8, 10, 6, 2, 9, 7};
    int n = 6;
    cout << great(arr, n);
    return 0;
}
