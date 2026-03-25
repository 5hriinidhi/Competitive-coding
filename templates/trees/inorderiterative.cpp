stack<Node*> st;
Node* curr = root;
while (curr || !st.empty()) {
    while (curr) { st.push(curr); curr = curr->left; }
    curr = st.top(); st.pop();
    cout << curr->val << " ";
    curr = curr->right;
}