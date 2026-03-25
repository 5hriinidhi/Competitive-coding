int cur = arr[0], best = arr[0];
for (int i = 1; i < n; i++) {
    cur = max(arr[i], cur + arr[i]);
    best = max(best, cur);
}