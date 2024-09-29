#include <iostream>
#include <map>
#include <list>
#include <queue>
using namespace std;

class Graph
{
    // Adjacency list using a map of lists
    map<int, list<int>> adjList;

public:
    // Add an edge to the graph
    void addEdge(int u, int v, bool bidir = true)
    {
        adjList[u].push_back(v);
        if (bidir)
        {
            adjList[v].push_back(u);
        }
    }

    // BFS function to traverse the graph
    void bfs(int start)
    {
        // Map to keep track of visited nodes
        map<int, bool> visited;

        // Queue for BFS
        queue<int> q;

        // Mark the start node as visited and enqueue it
        visited[start] = true;
        q.push(start);

        // While there are vertices in the queue
        while (!q.empty())
        {
            // Dequeue a vertex from the queue and print it
            int node = q.front();
            q.pop();
            cout << node << " ";

            // Get all adjacent vertices of the dequeued vertex
            for (int neighbor : adjList[node])
            {
                // If an adjacent vertex has not been visited, mark it visited and enqueue it
                if (!visited[neighbor])
                {
                    visited[neighbor] = true;
                    q.push(neighbor);
                }
            }
        }
        cout << endl; // To ensure output is clean
    }

    // Print adjacency list (for debugging or visualization)
    void printAdjList()
    {
        for (auto i : adjList)
        {
            cout << i.first << " -> ";
            for (int j : i.second)
            {
                cout << j << " ";
            }
            cout << endl;
        }
    }
};

int main()
{
    Graph g;

    // Adding edges to the graph
    g.addEdge(0, 1);
    g.addEdge(0, 4);
    g.addEdge(1, 2);
    g.addEdge(2, 3);
    g.addEdge(3, 4);
    g.addEdge(4, 5);

    cout << "Adjacency List of the Graph:" << endl;
    g.printAdjList();

    // Perform BFS from node 0
    cout << "\nBreadth-First Search (BFS) starting from node 0:" << endl;
    g.bfs(0);

    return 0;
}
