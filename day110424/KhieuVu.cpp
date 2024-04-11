// http://laptrinhonline.club/submission/577746 

#include <bits/stdc++.h>

using namespace std;

int main() {

    int m, n; cin >> n >> m;
    vector<int> a(n), b(m);
    
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < m; i++) cin >> b[i];

    sort(a.begin(), a.end(), greater<int>());
    sort(b.begin(), b.end(), greater<int>());

    int index_A = 0;
    int index_B = 0;
    int res = 0;

    while (index_A < n && index_B < m) {
        if (b[index_B] >= a[index_A]) {
            index_B++;
        } else {
            res ++;
            index_A++;
            index_B++;
        }
    }

    cout << res << endl;

    return 0;
}