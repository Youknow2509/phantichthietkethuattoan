
#include <bits/stdc++.h>

using namespace std;

#define ll long long

pair<ll, ll> fib(int n ) {
    if (n == 1) return make_pair(1, 1);
    pair<ll, ll> t = fib(n - 1);
    return make_pair(t.second, t.first + t.second);
}

int main() {

    int n; cin >> n;
    pair<ll, ll> ans = fib(n);
    cout << ans.first << " " << ans.second << endl;

    return 0;
}