#include <iostream>
using namespace std;

int count_negative_growth_days(int arr[], int n) {
    int count = 0;

    // Traverse the array and compare consecutive elements
    for (int i = 1; i < n; i++) {
        if (arr[i] < arr[i-1]) {
            count++; // Increment count if the price decreased
        }
    }

    return count;
}

int main() {
    int n;
    
    // Input array size
    cout << "Enter the size of the array: ";
    cin >> n;
    
    int arr[n];
    
    // Input array elements
    cout << "Enter the elements of the array (daily stock prices): ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    // Output the number of negative growth days
    cout << "Total number of negative growth days: " << count_negative_growth_days(arr, n) << endl;

    return 0;
}
