
#include <bits/stdc++.h>

using namespace std;

map<pair<int, int>, long long> D;

long long C(int k, int n) {
    if (k == 0 || k == n) return D[{k, n}] = 1;
    if (D.find({k, n}) != D.end()) return D[{k, n}];
    return D[{k, n}] = C(k - 1, n - 1) + C(k, n - 1);
}

int main () {
    int n;
    cin >> n;
    for (int i = 0; i <= n; i++) {
        for (int j = 0; j <= i; j++) {
            cout << C(j, i) << " ";
        }
        cout << endl;
    }

    return 0;
}