// http://laptrinhonline.club/problem/tichpxsotamgiac

#include <bits/stdc++.h>

using namespace std;


int main() {

    long long n; cin >> n;
    vector<long long> a(n);
    for (long long &x : a) cin >> x;

    sort(a.begin(), a.end());
    long long index = 1;
    for (index = 1; index < n; index++) {
        if (a[index] + a[index - 1] > a[n - 1]) {
            break;
        }
    }
    long long res = (n) - (index - 1);
    if (res >= 3) {
        cout << res << endl;
        return 0;
    } else {
        cout << "Khong the tao ra day thoa man" << endl;
    }

    return 0;
}

