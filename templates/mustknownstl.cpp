sort(all(v));                          // sort
sort(all(v), greater<int>());          // reverse sort
reverse(all(v));
*max_element(all(v));
*min_element(all(v));
lower_bound(all(v), x);               // first >= x
upper_bound(all(v), x);               // first > x
accumulate(all(v), 0LL);              // sum

// Useful containers
map<int,int> mp;
set<int> st;
priority_queue<int> maxpq;
priority_queue<int, vector<int>, greater<int>> minpq;