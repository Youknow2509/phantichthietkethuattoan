
#include <bits/stdc++.h>

using namespace std;

#define ll long long

void mypow(ll n, ll &a, ll &b) {
    if (n == 0) {
        a = 1; b = 0;
        return;
    }
    ll x, y;
    mypow(n / 2, x, y);
    a = x*x + y*y;
    b = x*y + y*(x + y);
    if (n % 2 == 1) {
        a = a + b;
        b = a - b;
    }
}

int main() {
    ll n, a, b;
    cin >> n;
    mypow(n, a, b);
    cout << a << endl;
}