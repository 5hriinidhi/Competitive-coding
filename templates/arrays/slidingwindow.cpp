int l = 0, sum = 0, ans = 0;
for (int r = 0; r < n; r++) {
    sum += arr[r];
    while (sum > k) sum -= arr[l++];
    ans = max(ans, r - l + 1);
}