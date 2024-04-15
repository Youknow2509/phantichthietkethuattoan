// http://laptrinhonline.club/problem/tichpxmedian

#include <bits/stdc++.h>

using namespace std;

int main() {

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    priority_queue<int> l;
    priority_queue<int, vector<int>, greater<int> > r;
    int n, x;

    cin >> n;

    for (int i = 1; i <= n; i++) {
        cin >> x;
        i%2 ? l.push(x) : r.push(x);
        if (r.size() && l.top() > r.top()) {
            int a = l.top(); l.pop();
            int b = r.top(); r.pop();
            l.push(b);
            r.push(a);
        }
        cout << l.top() << " ";
    }
    

    return 0;
}