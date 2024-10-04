#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    
    vector<int> arr(n);
    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    sort(arr.begin(), arr.end());

    for (int i = 0; i < n / 2; i++) {
        cout << arr[i] << " ";
    }
    for (int i = n - 1; i >= n / 2; i--) {
        cout << arr[i] << " ";
    }
}
