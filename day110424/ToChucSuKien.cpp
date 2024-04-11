// http://laptrinhonline.club/problem/tichpxtochucsukien

#include <bits/stdc++.h>

using namespace std;


bool compare(pair<int, int> a, pair<int, int> b) {
    return a.second < b.second;
}

int main() {

    int t; cin >> t;

    while (t--) {

        int n; cin >> n;
        vector<pair<int, int> > vt(n);

        for (int i = 0; i < n; i++) {
            cin >> vt[i].first >> vt[i].second;
        }

        sort(vt.begin(), vt.end(), compare);

        int res = 0;
        int m1 = -1e9;
        int m2 = -1e9;
        
        for (int i = 0; i < n; i++) {
            if (m1 < m2) {
                swap(m1, m2);
            } 
            if (vt[i].first > m1) {
                res++;
                m1 = vt[i].second;
            } else if (vt[i].first > m2) {
                res++;
                m2 = vt[i].second;
            }
        }

        cout << "Res:" << res << endl;
    }

    return 0;
}