#include <iostream>
#include <vector>
#include <stack>
using namespace std;

void DFS_Iterative(int start, vector<vector<int>>& adjList, vector<bool>& visited) {
    stack<int> s;
    s.push(start);

    while (!s.empty()) {
        int node = s.top();
        s.pop();

        if (!visited[node]) {
            visited[node] = true;
            cout << node << " ";

            // Push all unvisited neighbors to the stack
            for (int neighbor : adjList[node]) {
                if (!visited[neighbor]) {
                    s.push(neighbor);
                }
            }
        }
    }
}

int main() {
    int vertices = 6;  // Number of vertices
    vector<vector<int>> adjList(vertices);

    // Example graph: undirected edges
    adjList[0] = {1, 2};
    adjList[1] = {0, 3, 4};
    adjList[2] = {0, 4};
    adjList[3] = {1, 5};
    adjList[4] = {1, 2, 5};
    adjList[5] = {3, 4};

    vector<bool> visited(vertices, false);

    int start = 0;
    cout << "DFS (using stack) starting from node " << start << ": ";
    DFS_Iterative(start, adjList, visited);
    
    return 0;
}
