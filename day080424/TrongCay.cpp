// http://laptrinhonline.club/problem/ssptrees

#include <bits/stdc++.h>

using namespace std;

int main() {

    int n; cin >> n;
    vector<int> a(n); 
    for (int &x : a) cin >> x;

    sort(a.begin(), a.end(), greater<int>());

    int res = n + a[n - 1] + 1;

    for (int i = 0; i < n; i++) {
        res = max(res, i + a[i] + 2);
    }
    
    cout << res << endl;

    return 0;
}