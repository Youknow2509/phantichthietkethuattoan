// http://laptrinhonline.club/problem/khmtk63e5

#include <bits/stdc++.h>

using namespace std;

int main() {

    cin.tie(0); cout.tie(0); ios::sync_with_stdio(0);

    long long n; cin >> n;

    if (n % 2 == 0) {
        cout << n / 2;
    } else {
        for (int i = 3; i <= n / 2; i++) {
            if (n % i == 0) {
                cout << max(n/i, (n - 1)/2);
                return 0;
            }
        }
        cout << 1;
    }

    return 0;
}
