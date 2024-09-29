#include <iostream>
#include <list>
#include <map>
#include <stack>
using namespace std;

class Graph
{
    map<int, list<int>> adjList; // Adjacency list representation of the graph

public:
    // Function to add an edge to the graph
    void addEdge(int u, int v)
    {
        adjList[u].push_back(v); // Add v to the adjacency list of u
    }

    // Recursive DFS function
    void dfsRecursive(int node, map<int, bool> &visited)
    {
        visited[node] = true; // Mark the current node as visited
        cout << node << " ";  // Print the current node

        // Explore all adjacent nodes
        for (int neighbor : adjList[node])
        {
            if (!visited[neighbor])
            {                                    // If the neighbor hasn't been visited
                dfsRecursive(neighbor, visited); // Recur for the neighbor
            }
        }
    }

    // Iterative DFS function
    void dfsIterative(int start)
    {
        map<int, bool> visited; // Map to keep track of visited nodes
        stack<int> s;           // Stack for DFS

        s.push(start); // Push the start node onto the stack

        while (!s.empty())
        {                       // Loop until the stack is empty
            int node = s.top(); // Get the top node
            s.pop();            // Remove it from the stack

            // cout << node << " ";  // Print the node
            if (!visited[node])
            {                         // If the node hasn't been visited
                visited[node] = true; // Mark it as visited
                cout << node << " ";  // Print the node

                // Push all unvisited neighbors onto the stack
                for (int neighbor : adjList[node])
                {
                    if (!visited[neighbor])
                    {
                        s.push(neighbor); // Push unvisited neighbors onto the stack
                    }
                }
            }
        }
    }

    // Function to initiate DFS
    void dfs(int start)
    {
        map<int, bool> visited; // Map to keep track of visited nodes
        cout << "DFS (Recursive): ";
        dfsRecursive(start, visited); // Call recursive DFS
        cout << endl;

        cout << "DFS (Iterative): ";
        dfsIterative(start); // Call iterative DFS
        cout << endl;
    }
};

// Driver Code
int main()
{
    Graph g;
    g.addEdge(1, 2);
    g.addEdge(1, 3);
    g.addEdge(2, 4);
    g.addEdge(2, 5);
    g.addEdge(3, 6);
    g.addEdge(4, 7);

    cout << "Following is the Depth-First Search:\n";
    g.dfs(1); // Start DFS from node 1

    return 0;
}
