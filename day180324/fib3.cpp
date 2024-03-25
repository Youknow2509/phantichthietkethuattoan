
#include <bits/stdc++.h>

using namespace std;

#define ll long long

ll F[105] = {0, 1, 1};

char xFibo(ll k, ll n) {
    if (n == 1) return 'A';
    if (n == 2) return 'B';
    if (k <= F[n-2]) return xFibo(k, n-2);
    return xFibo(k-F[n-2], n-1);
}

int main() {

    for (int i = 3; i <= 100; i++) F[i] = F[i-1] + F[i-2];
    ll t, n, k;
    cin >> t;
    while (t--) {
        cin >> n >> k;
        cout << xFibo(k, n) << endl;
    }

    return 0;
}