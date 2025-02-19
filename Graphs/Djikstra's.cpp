#include <iostream>
#include <vector>
#include <queue>

using namespace std;

vector<int> dijkstra(int start, int n, vector<vector<pair<int, int>>> &adj) {
    vector<int> distance(n, 1e9);  // Start with large distances (infinity)
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq; // Min-Heap

    distance[start] = 0;
    pq.push({0, start});  // (distance, node)

    while (!pq.empty()) {
        int dist = pq.top().first;
        int node = pq.top().second;
        pq.pop();

        // If we already found a shorter way to this node, ignore it
        if (dist > distance[node]) continue;

        for (auto edge : adj[node]) {
            int neighbor = edge.first;
            int edge_weight = edge.second;

            if (distance[node] + edge_weight < distance[neighbor]) {  // Found a shorter path
                distance[neighbor] = distance[node] + edge_weight;
                pq.push({distance[neighbor], neighbor});
            }
        }
    }

    return distance;
}
