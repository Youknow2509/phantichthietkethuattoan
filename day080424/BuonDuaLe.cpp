// http://laptrinhonline.club/problem/tichpxbuonduale

#include <bits/stdc++.h>

using namespace std;

int main() {    

    int n, m, k; cin >> n >> k >> m;
    queue<int> q;

    int res = 0, x;

    for (int i = 0; i < n + k - 1; i++) { 
        if (i < n) {
            cin >> x;
        } else {
            x = 0;
        }
        if (i < k) {
            q.push(x);
        }
        while (q.size() > k) {
            q.pop();
        }
        int t = 0; // Ca chua da thu hoach trong ngay thu i
        while (!q.empty() && t + q.front() <= m) {
            t += q.front();
            q.pop();
        }
        if (q.size()) {
            q.front() -= (m - t);
            t = m;
        }
        res += t;
    }
    
    cout << res << endl;

    return 0;
}