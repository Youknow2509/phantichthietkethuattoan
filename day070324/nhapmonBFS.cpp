
#include<iostream>
#include<vector>
#include<map>
#include<queue>

using namespace std;

int main () {

    #ifndef ONLINE_JUDGE
    freopen("inp.txt", "r", stdin);
    #endif

    int m, n;
    int x1, y1, x2, y2;
    cin >> m >> n;
    cin >> x1 >> y1 >> x2 >> y2;
    
    int dx[8] = {1, 2, 2, 1, -1, -2, -2, -2};
    int dy[8] = {2, 1, -1, -2, -2, -1, 1, 2};

    map<pair<int, int>, int> mp; // luu so buoc di
    queue<pair<int, int> > q; // luu diem duyet
    pair<int, int> p = make_pair(x2, y2); // diem ket thuc
    pair<int, int> u = make_pair(x1, y1); // diem tam

    mp[make_pair(x1, y1)] = 0;
    q.push(u);

    while (!q.empty() && u != p){
        u = q.front(); q.pop();
        for (int i = 0; i < 8; i++) {
            int x = u.first + dx[i];
            int y = u.second + dy[i];
            pair<int, int> t = make_pair(x, y);
            if (x >= 1 && x <= m && y >= 1 && y <= n && mp.find(t) == mp.end()){
                q.push(t);
                mp[t] = mp[u] + 1;
            }
        }
    }
    if (mp.find(p) == mp.end()) {
        cout << -1 << endl;
    } else {
        cout << mp[p] << endl;
    }
    return 0;
}
