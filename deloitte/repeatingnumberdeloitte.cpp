#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int findmaxfreq(const vector<int>& numbers) {
    unordered_map<int, int> map;
    for (int num : numbers) {
        map[num]++;
    }
    
    int maxfreq = 0;
    for (const auto &it : map) {
        if (it.second > maxfreq) {
            maxfreq = it.second;
        }
    }
    return maxfreq;
}

int main() {
    vector<int> numbers = {1, 10, 31, 54, 1, 61};
    cout << findmaxfreq(numbers);
    return 0;
}
