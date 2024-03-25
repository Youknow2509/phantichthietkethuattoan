
#include <bits/stdc++.h>

using namespace std;

#define ll long long

ll D[100] = {0, 1};

ll B(ll n) {
    if (n < 1) return 0;
    ll k = log2(n + 1);
    return D[k] + (n - (1LL<<k) + 1) + B(n - (1LL<<k));
}

int main() {

    for (ll i = 2; i < 100; i++) {
        D[i] = D[i - 1]*2 +(1LL << (i - 1));
    }
    ll n;
    cin >> n;
    cout << B(n) << endl;
    return 0;
}