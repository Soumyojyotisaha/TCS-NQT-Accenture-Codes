#include <iostream>
#include <vector>
using namespace std;

vector<int> applyVirusEffect(const vector<int>& V, int n) {
    vector<int> result(V.size());
    int divisor = 1 << n;  // Equivalent to 2^n

    for(size_t i = 0; i < V.size(); i++) {
        result[i] = V[i] / divisor;  // Perform integer division by 2^n
    }

    return result;
}

int main() {
    int N, n;
    cin >> N;
    
    vector<int> V(N);
    for(int i = 0; i < N; i++) {
        cin >> V[i];
    }
    
    cin >> n;
    
    vector<int> finalSituation = applyVirusEffect(V, n);
    
    for(int num : finalSituation) {
        cout << num << " ";
    }
    
    return 0;
}
