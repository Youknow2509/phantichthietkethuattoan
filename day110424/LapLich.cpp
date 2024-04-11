// http://laptrinhonline.club/problem/tichpxlaplich

#include <bits/stdc++.h>

using namespace std;

bool compare(pair<int, int> a, pair<int, int> b) {
    return a.second < b.second;
}

int main() {

    int n; cin >> n;

    vector<pair<int, int> > vt(n);

    for (int i = 0; i < n; i++) {
        cin >> vt[i].first >> vt[i].second;
    }

    sort(vt.begin(), vt.end(), compare);

    /* cout << "After sort: " << endl;

    for (int i = 0; i < n; i++) {
        cout << vt[i].first << " " << vt[i].second << endl;
    } */

    int res = 0;
    int m = -1e9;
    
    for (int i = 0; i < n; i++) {
        if (vt[i].first > m) {
            res++;
            m = vt[i].second;
        }
    }

    // cout << "Res: " << res << endl;

    cout << res << endl;

    return 0;
}