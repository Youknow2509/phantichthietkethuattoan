
#include <bits/stdc++.h>

using namespace std;

double t = 0, res = 1e9;;
int arr [1001], n;

void TRY(int k, int A, int B) {
    if (k == n - 1) {
        res = min(res, (double)B - A);
    } else {
        if (A + arr[k] <= t) {
            TRY(k + 1, A + arr[k], B);
        } 
        if (B + arr[k] < t + res/2) {
            TRY(k + 1, A, B + arr[k]);
        }
    }
}

int main() {
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> arr[i];
        t += arr[i];
    }

    t /= 2;
    TRY(1, 0, 0);
    cout << res;
    return 0;
}