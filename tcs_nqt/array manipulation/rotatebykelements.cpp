#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        k = k % nums.size(); // In case k is larger than the size of the array
        reverse(nums.begin(), nums.end()); // Reverse the whole array
        reverse(nums.begin(), nums.begin() + k); // Reverse the first k elements
        reverse(nums.begin() + k, nums.end()); // Reverse the rest of the array
    }
};

int main() {
    Solution sol;
    vector<int> nums = {1, 2, 3, 4, 5, 6, 7};
    int k = 3;
    
    sol.rotate(nums, k); // Rotate the array
    
    // Print the rotated array
    for (int i = 0; i < nums.size(); i++) {
        cout << nums[i] << " ";
    }
    cout << endl;

    return 0;
}
