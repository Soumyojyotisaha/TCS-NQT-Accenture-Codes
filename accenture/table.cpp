#include <iostream>
#include <vector>
using namespace std;

int table(int n) {
    int sum = 0;
    vector<int> tables;

    // Generate the multiplication table and calculate the sum
    for (int i = 1; i <= 10; i++) {
        int value = i * n;
        tables.push_back(value);
        sum += value;
    }

    // Output the multiplication table
    for (const auto &it : tables) {
        cout << it << " ";  // Print each value in the table
    }
    cout << endl;

    // Return the sum of the table
    return sum;
}

int main() {
    int n = 5;
    cout << "Sum of the table: " << table(n) << endl;
    return 0;
}
