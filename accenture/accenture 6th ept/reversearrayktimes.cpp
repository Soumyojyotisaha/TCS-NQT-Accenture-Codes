#include <bits/stdc++.h>
using namespace std;

void rotate(vector<int>& nums, int k) {
    k = k % nums.size();  // Ensure k is within bounds
    reverse(nums.begin(), nums.end());  // Reverse the entire array
    reverse(nums.begin(), nums.begin() + k);  // Reverse the first k elements
    reverse(nums.begin() + k, nums.end());  // Reverse the remaining elements
}

int main() {
    int n = 7;  // Hardcoded n
    vector<int> nums = {1, 2, 3, 4, 5, 6, 7};  // Hardcoded array
    int k = 3;  // Hardcoded k

    cout << "Original array: ";
    for (int num : nums)
        cout << num << " ";
    cout << endl;

    rotate(nums, k);  // Rotate the array

    cout << "Array after rotating by " << k << " positions: ";
    for (int num : nums)
        cout << num << " ";
    cout << endl;

    return 0;
}
