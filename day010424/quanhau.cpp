// http://laptrinhonline.club/problem/mah2

#include <bits/stdc++.h>

using namespace std;

int n;
int res = 0;
map<int, int> C, P, A;
int x[1000];

void solve(int i) {
    if (i - 1 == n) {
        cout << endl << res++ << " : ";
        for (int j = 1; j <= n; j++) {
            cout << ", " << x[i] << " ";
        }
        return;
    } 
    for (int t = 1; t <= n; t++) {
        if (A[t] == 0 && C[i - t] == 0 && P[i + t] == 0) {
            A[t] = 1;
            C[i + t] = 1;
            P[i - t] = 1;
            x[i] = t;
            solve(i + 1);
            A[t] = 0;
            C[i + t] = 0;
            P[i - t] = 0;
        }
    }
}

int main() {

    cin >> n;
    solve(1);
    return 0;
}