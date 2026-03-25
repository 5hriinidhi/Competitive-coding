int l = 0, r = n - 1;
while (l < r) {
    if (arr[l] + arr[r] == target) { /* found */ break; }
    else if (arr[l] + arr[r] < target) l++;
    else r--;
}