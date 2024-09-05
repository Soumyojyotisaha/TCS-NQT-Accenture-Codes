#include <bits/stdc++.h>
using namespace std;

int ratfood(int arr[], int n, int r, int unit) {
    int target = r * unit;
    int sum = 0;
    int count = 0;

    if (n == 0) {
        return 0;
    }

    for (int i = 0; i < n; i++) {
        sum += arr[i];
        count++;
        if (sum >= target) {
            return count;
        }
    }

    // If the loop finishes and the target isn't met
    return -1; // Or any indicator that the target cannot be met
}

// Driver code
int main() {
    int arr[] = {2, 8, 3, 5, 7, 4, 1, 2};
    int n = sizeof(arr) / sizeof(arr[0]);
    int r = 7;
    int unit = 2;

    int result = ratfood(arr, n, r, unit);
    if (result == -1) {
        cout << "Target cannot be met" << endl;
    } else {
        cout << "Minimum houses needed: " << result << endl;
    }
    return 0;
}
