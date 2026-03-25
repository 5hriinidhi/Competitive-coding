void bfs(Node* root) {
    queue<Node*> q;
    q.push(root);
    while (!q.empty()) {
        int sz = q.size();
        while (sz--) {
            Node* node = q.front(); q.pop();
            cout << node->val << " ";
            if (node->left)  q.push(node->left);
            if (node->right) q.push(node->right);
        }
        cout << endl;
    }
}