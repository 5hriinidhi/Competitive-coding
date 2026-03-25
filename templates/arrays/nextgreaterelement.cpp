vector<int> nge(n, -1);
stack<int> st;
for (int i = 0; i < n; i++) {
    while (!st.empty() && arr[st.top()] < arr[i]) {
        nge[st.top()] = arr[i];
        st.pop();
    }
    st.push(i);
}