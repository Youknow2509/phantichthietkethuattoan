
// http://laptrinhonline.club/problem/tichpxtul

#include <bits/stdc++.h>

using namespace std;

long long s(long long n) {
    if (n < 2) return n;
    return ((n + 1)/2)*((n + 1)/2) + s(n/2);
}

int main() {

    int t;
    long long a, b; cin >> t;
    for (int i = 0; i < t; i++) {
        cin >> a >> b;
        cout << s(b) - s(a - 1) << endl;
    }

    return 0;
}