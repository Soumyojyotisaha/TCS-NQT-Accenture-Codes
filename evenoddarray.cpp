#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cout << "Enter the size of the matrix: ";
    cin >> n;

    vector<int> even, odd;

    for (int i = 0; i < n; i++) {
        int element;
        cout << "Enter element at index " << i << ": ";
        cin >> element;
        if (i % 2 == 0) {
            even.push_back(element);
        } else {
            odd.push_back(element);
        }
    }

    // Sorting the even and odd vectors
    sort(even.begin(), even.end());
    sort(odd.begin(), odd.end());

    cout << "Sorted even array: ";
    for (int num : even) {
        cout << num << " ";
    }
    cout << endl;

    cout << "Sorted odd array: ";
    for (int num : odd) {
        cout << num << " ";
    }
    cout << endl;

    // Finding the second largest elements
    int secondLargestEven = even.size() >= 2 ? even[even.size() - 2] : even[0];
    int secondLargestOdd = odd.size() >= 2 ? odd[odd.size() - 2] : odd[0];

    int result = secondLargestEven + secondLargestOdd;

    cout << result << endl;

    return 0;
}
