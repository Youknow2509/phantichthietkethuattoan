// http://laptrinhonline.club/problem/tichpxnoidam

#include <bits/stdc++.h>

using namespace std; 

int main() {

    priority_queue<long, vector<long>, greater<long> > pq;

    int n; cin >> n;

    for (int i = 0; i < n; i++) {
        long x; cin >> x;
        pq.push(x);
    }

    int res = 0;

    for (int i = 0; i < n - 1; i++) {
        long x = pq.top(); pq.pop();
        long y = pq.top(); pq.pop();
        res += x + y;
        
        pq.push(x + y);
    }

    cout << res << endl;
    
    return 0;
}