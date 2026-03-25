struct Node {
    int val;
    Node* left, *right;
    Node(int v) : val(v), left(nullptr), right(nullptr) {}
};

int height(Node* root) {
    if (!root) return 0;
    return 1 + max(height(root->left), height(root->right));
}