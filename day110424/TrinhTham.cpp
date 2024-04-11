// http://laptrinhonline.club/problem/tichpxtrinhtham

#include <bits/stdc++.h>

using namespace std;

int main() {

    int n, k; cin >> n >> k;

    priority_queue<pair<int, int> > pq;
    for (int i = 1; i <= n; i++) {
        int x; cin >> x;
        
        pq.push(make_pair(x, i));

        if (i >= k) {
            while (i - pq.top().second >= k) {
                pq.pop();
            }
            cout << pq.top().first << " ";
        }
    }

    return 0;
}