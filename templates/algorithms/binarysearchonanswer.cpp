// "find minimum X such that check(X) is true"
int lo = 1, hi = 1e9, ans = hi;
while (lo <= hi) {
    int mid = lo + (hi - lo) / 2;
    if (check(mid)) { ans = mid; hi = mid - 1; }
    else lo = mid + 1;
}