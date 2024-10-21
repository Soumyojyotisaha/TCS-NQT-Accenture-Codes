#include <bits/stdc++.h>
using namespace std;

int binarySearch(int arr[], int n, int key) {
    sort(arr,arr+n);
    int low = 0, high = n - 1;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        
        if (arr[mid] == key)
            return mid;
        else if (arr[mid] < key)
            low = mid + 1;
        else
            high = mid - 1;
    }
    
    return -1;
}

int main() {
    int arr[] = {2, 5, 7, 12, 36, 21, 24};
    int n = sizeof(arr) / sizeof(arr[0]);
    int key = 24;
    
    int result = binarySearch(arr, n, key);
    
    if (result != -1)
        cout << "Element found at index " << result << endl;
    else
        cout << "Element not found" << endl;

    return 0;
}
