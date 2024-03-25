
#include <bits/stdc++.h>

using namespace std;

#define ll long long


ll M = 1e9+9, x, y;
void mypow(ll n, ll &a, ll &b) {
    if (n == 0) {
        a = 1; b = 0;
        return;
    }
    ll x, y;
    mypow(n / 2, x, y);
    a = (x*x%M + y*y%M)%M;
    b = (x*y%M + y*(x - y)%M)%M;
    if (n % 2) {
        a = (a + b)%M;
        b = (a - b)%M;
    }
}

int main() {
    ll n, a, b;
    cin >> n;
    mypow(n + 1, a, b);
    a--;
    cout << (a + M)%M << endl;
}