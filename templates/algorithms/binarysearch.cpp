int lo = 0, hi = n - 1, ans = -1;
while (lo <= hi) {
    int mid = lo + (hi - lo) / 2;
    if (arr[mid] == target) { ans = mid; break; }
    else if (arr[mid] < target) lo = mid + 1;
    else hi = mid - 1;
}