// http://laptrinhonline.club/problem/khmtk63e1

#include <bits/stdc++.h>

using namespace std;

int main() {

    cin.tie(0); cout.tie(0); ios::sync_with_stdio(0);

    int n, q; cin >> n >> q;

    vector<int> lc(n); 
    for (int i = 0; i < n; i++) {
        cin >> lc[i];
    }

    sort(lc.begin(), lc.end());

    for (int i = 0; i < q; i++) {
        int x, y; cin >> x >> y;
        cout << upper_bound(lc.begin(), lc.end(), y) - lower_bound(lc.begin(), lc.end(), x) << '\n';
    }
    
    return 0;
}