
#include <bits/stdc++.h>

using namespace std;

class doitien {
    private:
        int n;
        vector<int> tien;  // Cac gia tri tien dang co
        vector<int> res;
        queue<int> q;
        map<int, int> mp;
        int r;
    public:
        doitien(){}
        doitien(int n, vector<int> tien, int r){
            this->n = n;
            this->tien = tien;
            this->r = r;
        }
        // Su dung bfs
        void solve() {
            
            q.push(0); mp[0] = 0;

            int u, v;
            while (q.size() > 0 && mp.find(r) == mp.end()) {
                u = q.front(); q.pop();
                for (int i = 0; i < tien.size(); i++) {
                    v = u + tien[i];
                    if (mp.find(v) == mp.end() && v <= r){
                        mp[v] = mp[u] + 1;
                        q.push(v);
                    }
                }
            }
            if (mp.find(r) == mp.end()) {
                cout << "-1" << endl;
            } else {
                cout << mp[r] << endl;
            }
        }
};

int main() {

    #ifndef ONLINE_JUDGE
    freopen("doitien.inp", "r", stdin);
    #endif

    int n, m; cin >> n >> m;
    vector<int> tien(n);
    vector<int> r(m);
    for (int i = 0; i < n ;i++) {
        cin >> tien[i];
    }
    for (int i = 0; i < m; i++) {
        cin >> r[i];
    }
    for (int i = 0; i < m; i++) {
        doitien dt(n, tien, r[i]);
        dt.solve();
    }
    return 0;
}
