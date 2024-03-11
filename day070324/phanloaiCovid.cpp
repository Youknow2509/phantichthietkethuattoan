
#include<bits/stdc++.h>

using namespace std;

class phanloaiCovid {

};

int main() {    

    #ifndef ONLINE_JUDGE
    freopen("phanloaiCovid.inp", "r", stdin);
    #endif
    int n; cin >> n; // n nguoi
    int m; cin >> m; // so cap tiep xuc
    vector<vector<int> > tx(n+5); 
    for (int i = 0; i < m; i++) {
        int a, b; cin >> a >> b;
        tx[a].push_back(b);
        tx[b].push_back(a);
    }
    
    int k; cin >> k; // so nguoi bi nhiem
    queue<int> q;
    map<int, int> res;
    vector<int> f(n, 0);
    for (int i = 0; i < k; i++) {
        int t; cin >> t;
        q.push(t);
        res[t] = 0;
        f[0]++;
    }
    // Solve
    while (!q.empty()) {
        int u = q.front(); q.pop();
        for (int i = 0; i < tx[u].size(); i++) {
            int v = tx[u][i];
            if (res.find(v) == res.end()) {
                res[v] = res[u] + 1;
                q.push(v);
                f[res[v]]++;
            }
        }
    }
    for (int i = 0; i <= n; i++) {
        if (f[i] == 0) {
            break;
        } else {
            cout << "F" << i << ": " << f[i] << endl;
        }
    }
    return 0;
}