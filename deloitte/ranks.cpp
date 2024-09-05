#include <iostream>
#include <vector>
using namespace std;

int countNamesCut(int N, const vector<int>& ranks) {
    if (N == 0) return 0;

    int count = 0;
    int max_rank = ranks[0];  // Initialize with the first rank

    for (int i = 1; i < N; ++i) {
        if (ranks[i] < max_rank) {
            ++count;  // Increment the count if current rank is less than max_rank
        } else {
            max_rank = ranks[i];  // Update max_rank if current rank is higher
        }
    }

    return count;
}

int main() {
    int N;
    cout << "Enter the number of visits: ";
    cin >> N;

    vector<int> ranks(N);
    cout << "Enter the ranks: ";
    for (int i = 0; i < N; ++i) {
        cin >> ranks[i];
    }

    int result = countNamesCut(N, ranks);
    cout << "Number of ranks cut in the list: " << result << endl;

    return 0;
}
