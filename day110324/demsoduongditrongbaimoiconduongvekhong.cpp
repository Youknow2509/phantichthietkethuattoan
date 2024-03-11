// http://laptrinhonline.club/problem/tichpxzerodem

#include <bits/stdc++.h>

using namespace std;

long long c = 1e9 + 7;
map<int, long long> m;

long long zero(int n) {
    if (m.find(n) != m.end()) return m[n];
    if (n == 0) return m[n] = 1;
    for (long long a = 1; a*a <= n; a++) {
        if (n % a == 0) {
            m[n] =  (m[n] + zero((a - 1)*(n/a + 1)))%c;
        }
    }
    return m[n];
}

int main() {

    int t, n; cin >> t;
    for (int i = 0; i < t; i++) {
        cin >> n;
        cout << zero(n)<< endl;
    }

    return 0;
}