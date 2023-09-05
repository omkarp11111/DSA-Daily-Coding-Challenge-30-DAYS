// Given the root of a Directed graph, 
// The task is to check whether the graph contains a cycle or not.
#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

class Graph {
public:
    Graph(int vertices) : V(vertices) {
        adjList.resize(vertices);
    }

    void addEdge(int u, int v) {
        adjList[u].push_back(v);
    }

    bool hasCycle() {
        vector<int> visited(V, 0); // 0: not visited, 1: visiting, 2: visited

        for (int i = 0; i < V; i++) {
            if (visited[i] == 0 && isCyclicDFS(i, visited)) {
                return true;
            }
        }

        return false;
    }

private:
    int V;
    vector<vector<int>> adjList;

    bool isCyclicDFS(int v, vector<int>& visited) {
        visited[v] = 1; // Mark as visiting

        for (int neighbor : adjList[v]) {
            if (visited[neighbor] == 1) {
                return true; // Found a back edge, cycle detected
            }
            if (visited[neighbor] == 0 && isCyclicDFS(neighbor, visited)) {
                return true;
            }
        }

        visited[v] = 2; // Mark as visited
        return false;
    }
};

int main() {
    // Example usage:
    Graph g(4);
    g.addEdge(0, 1);
    g.addEdge(0, 2);
    g.addEdge(1, 2);
    g.addEdge(2, 0);
    g.addEdge(2, 3);
    g.addEdge(3, 3);

    if (g.hasCycle()) {
        cout << "The directed graph contains a cycle." << endl;
    } else {
        cout << "The directed graph does not contain a cycle." << endl;
    }

    return 0;
}
