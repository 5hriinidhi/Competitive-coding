vector<int> prefix(n + 1, 0);
for (int i = 0; i < n; i++)
    prefix[i + 1] = prefix[i] + arr[i];
// sum [l, r] = prefix[r+1] - prefix[l]