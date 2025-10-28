queue<Node*> q;
q.push(start);
while (!q.empty()) {
    Node* current = q.front(); q.pop();
    // Process current
    for (Node* neighbor : current->neighbors) {
        q.push(neighbor);
    }
}
