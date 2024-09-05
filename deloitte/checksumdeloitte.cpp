#include <bits/stdc++.h>
using namespace std;

int checksum(int number) {
    string numstr = to_string(number);
    
    // Find the minimum and maximum digits in the number
    char mindigit = *min_element(numstr.begin(), numstr.end());
    char maxdigit = *max_element(numstr.begin(), numstr.end());
    
    int sum = 0;
    bool min_removed = false;
    bool max_removed = false;
    
    // Calculate the checksum by summing digits excluding one instance each of min and max
    for (char digit : numstr) {
        if (digit == mindigit && !min_removed) {
            min_removed = true;
        } else if (digit == maxdigit && !max_removed) {
            max_removed = true;
        } else {
            sum += digit-'0'; // Convert char to int and add to sum
        }
    }
    
    return sum;
}

int sumofnums(const vector<int>& numbers) {
    int total_sum = 0;
    for (int num : numbers) {
        total_sum += checksum(num);
    }
    return total_sum;
}

int main() {
    int N;
    cin >> N;
    vector<int> numbers(N);

    for (int i = 0; i < N; ++i) {
        cin >> numbers[i];
    }

    cout << sumofnums(numbers) << endl;
    return 0;
}
