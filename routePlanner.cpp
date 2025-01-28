
#include <iostream>
#include <vector>
#include <list>
#include <climits>
#include <queue>
#include <unordered_map>

using namespace std;

// Define the Node structure
struct Node {
    string location;
    list<pair<Node*, int>> edges; // list of pairs (neighbor, weight)

    Node(string loc) : location(loc) {}
};

// Define the Graph structure
class Graph {
private:
    unordered_map<string, Node*> nodes;

public:
    void addLocation(string location) {
        if (nodes.find(location) == nodes.end()) {
            nodes[location] = new Node(location);
        }
    }

    // Modify this method to allow for user-defined weight types (distance, time, cost)
    void addRoute(string start, string end, int weight) {
        Node* s = nodes[start];
        Node* e = nodes[end];
        s->edges.push_back({e, weight});
        e->edges.push_back({s, weight}); // Assuming undirected graph
    }

    // BFS Implementation
    void BFS(string start, string end) {
        unordered_map<string, bool> visited;
        unordered_map<string, string> parent;
        queue<string> q;
        visited[start] = true;
        q.push(start);

        while (!q.empty()) {
            string current = q.front();
            q.pop();

            if (current == end) {
                // Reconstruct the path
                vector<string> path;
                string temp = end;
                while (temp != start) {
                    path.push_back(temp);
                    temp = parent[temp];
                }
                path.push_back(start);

                cout << "Path found using BFS: ";
                for (auto it = path.rbegin(); it != path.rend(); ++it) {
                    cout << *it << " ";
                }
                cout << endl;
                return;
            }

            for (auto& edge : nodes[current]->edges) {
                if (!visited[edge.first->location]) {
                    visited[edge.first->location] = true;
                    parent[edge.first->location] = current;
                    q.push(edge.first->location);
                }
            }
        }

        cout << "No path found using BFS!" << endl;
    }

    // DFS Utility Function
    bool DFSUtil(string current, string end, unordered_map<string, bool>& visited, vector<string>& path) {
        visited[current] = true;
        path.push_back(current);

        if (current == end) {
            return true; // Path found
        }

        for (auto& edge : nodes[current]->edges) {
            if (!visited[edge.first->location]) {
                if (DFSUtil(edge.first->location, end, visited, path)) {
                    return true; // Path found in recursive call
                }
            }
        }

        path.pop_back(); // Backtrack
        return false;
    }

    void DFS(string start, string end) {
        unordered_map<string, bool> visited;
        vector<string> path;

        if (DFSUtil(start, end, visited, path)) {
            cout << "Path found using DFS: ";
            for (const string& loc : path) {
                cout << loc << " ";
            }
            cout << endl;
        } else {
            cout << "No path found using DFS!" << endl;
        }
    }

    // Dijkstra's Algorithm for shortest path
    void Dijkstra(string start, string end) {
        unordered_map<string, int> dist;
        unordered_map<string, string> parent;
        priority_queue<pair<int, string>, vector<pair<int, string>>, greater<pair<int, string>>> pq;

        for (auto& node : nodes) {
            dist[node.first] = INT_MAX;
        }

        dist[start] = 0;
        pq.push({0, start});

        while (!pq.empty()) {
            string u = pq.top().second;
            pq.pop();

            if (u == end) {
                // Reconstruct the shortest path
                vector<string> path;
                string temp = end;
                while (temp != start) {
                    path.push_back(temp);
                    temp = parent[temp];
                }
                path.push_back(start);

                cout << "Shortest path using Dijkstra: ";
                for (auto it = path.rbegin(); it != path.rend(); ++it) {
                    cout << *it << " ";
                }
                cout << "\nTotal distance: " << dist[end] << endl;
                return;
            }

            for (auto& edge : nodes[u]->edges) {
                string v = edge.first->location;
                int weight = edge.second;

                if (dist[u] + weight < dist[v]) {
                    dist[v] = dist[u] + weight;
                    pq.push({dist[v], v});
                    parent[v] = u;
                }
            }
        }

        cout << "No path found using Dijkstra!" << endl;
    }
};

// Main function with integrated menu
int main() {
    Graph g;
    int choice;

    do {
        cout << "\nMenu:\n";
        cout << "1. Add Locations\n";
        cout << "2. Add Routes\n";
        cout << "3. Perform BFS\n";
        cout << "4. Perform DFS\n";
        cout << "5. Perform Dijkstra\n";
        cout << "0. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: {
                int numLocations;
                cout << "Enter the number of locations to add: ";
                cin >> numLocations;

                for (int i = 0; i < numLocations; ++i) {
                    string location;
                    cout << "Enter location " << i + 1 << ": ";
                    cin >> location;
                    g.addLocation(location);
                }
                break;
            }

            case 2: {
                string start, end;
                int weight, weightType;

                cout << "Enter route (start location, end location): ";
                cin >> start >> end;

                cout << "Choose weight type (1: Distance, 2: Travel Time, 3: Cost): ";
                cin >> weightType;

                cout << "Enter the weight (value): ";
                cin >> weight;

                g.addRoute(start, end, weight);
                break;
            }

            case 3: {
                string start, end;
                cout << "Enter the start and end locations for BFS: ";
                cin >> start >> end;
                g.BFS(start, end);
                break;
            }

            case 4: {
                string start, end;
                cout << "Enter the start and end locations for DFS: ";
                cin >> start >> end;
                g.DFS(start, end);
                break;
            }

            case 5: {
                string start, end;
                cout << "Enter the start and end locations for Dijkstra: ";
                cin >> start >> end;
                g.Dijkstra(start, end);
                break;
            }

            case 0:
                cout << "Exiting program. Goodbye!\n";
                break;

            default:
                cout << "Invalid choice! Please try again.\n";
        }
    } while (choice != 0);

    return 0;
}
