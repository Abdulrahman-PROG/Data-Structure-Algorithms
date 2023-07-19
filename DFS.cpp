#include <iostream>
#include <vector>

using namespace std;

// Function to perform DFS traversal
void dfs(int node, vector<int>& visited, vector<vector<int>>& graph) {
    // Mark the current node as visited
    visited[node] = 1    cout << node " ";

    // Traverse all adjacent nodes of the current node
    for (int i = 0; i < graph[node].size(); i {
        int adjacentNode = graph[node][i];
        if (!visited[adjacentNode]) {
            dfs(adjacentNode, visited, graph);
        }
    }
}

int main() {
    int numNodes, numEdges;
    cout << "Enter the number of nodes: ";
    cin >> numNodes;
    cout <<Enter the number of edges: ";
    cin >> numEdges;

    vector<vector<int>> graph(numNodes);

    cout << "Enter the edges (node1 node2):" << endl;
    for (int i = 0; i < numEdges; i++) {
        int node1, node2;
        cin >> node1 >> node2;

        Add edges to the graph
        graph[node1].push_back(node2);
        graph[node2].push_back(node1);
    }

 vector<int> visited(numNodes, 0); // Initialize visited array with 0

    cout << " traversal starting from node 0: ";
    dfs(0, visited, graph);

    return 0;
}
