void dfs(Node* node) {
    // Process node
    for (Node* neighbor : node->neighbors) {
        dfs(neighbor);
    }
}
