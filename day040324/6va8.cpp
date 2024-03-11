
#include <bits/stdc++.h>

using namespace std;

int main() {

    int n, x, y;
    cin >> n;
    queue<int> q;
    map<int, string> m; 
    if (n % 5 == 0) {
        cout << 0;
        return 0;
    }
    q.push(8%n); m[8%n] = "8";
    q.push(6%n); m[6%n] = "6";
    while (q.size() and m.find(0) == m.end()) {
        int u = q.front(); q.pop();
        x = (u*10+6)%n;
        if (m.find(x) == m.end()) {
            m[x] = m[u] + "6";
            q.push(x);
        }
        x = (u*10+8)%n;
        if (m.find(x) == m.end()) {
            m[x] = m[u] + "8";
            q.push(x);
        }
    }
    if (m.find(0) == m.end()) {
        m[0] = "0";
    } 
    cout << m[0] << endl;

    return 0;
}