#include <bits/stdc++.h>
 
using namespace std;

// Function to find both the largest and smallest elements
pair<int, int> findLargestAndSmallestElement(int arr[], int n) {
    int max = arr[0];
    int min = arr[0];
    
    for (int i = 1; i < n; i++) {  // Start from 1 since 0 is already initialized
        if (max < arr[i]) {
            max = arr[i];
        }
        if (arr[i] < min) {
            min = arr[i];
        }
    }
    return {max, min};  // Return as a pair
}

int main() {
    int arr1[] = {2, 5, 1, 3, 0};
    int n = 5;
    
    // Get the pair containing max and min
    pair<int, int> max_and_min = findLargestAndSmallestElement(arr1, n);
    
    // Output the results
    cout << "The largest element in the array is: " << max_and_min.first << endl;
    cout << "The smallest element in the array is: " << max_and_min.second << endl;
}
