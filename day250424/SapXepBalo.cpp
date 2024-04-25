#include <bits/stdc++.h>

using namespace std;

int n;
int W[105], V[105];
int dp[105][10005];
int q;
int max_size = 0;

int main() {

    cin.tie(0); cout.tie(0); ios::sync_with_stdio(0);

    cin >> n;
    for (int i = 0; i < n; i++) cin >> W[i] >> V[i];
    cin >> q;
    vector<int> inp(q);
    for (int i = 0; i < q; i++) {
        cin >> inp[i];
        if (inp[i] > max_size) {
            max_size = inp[i];
        }
    }
    
    for (int i = 0; i < n + 1; i++) {
        dp[i][0] = 0;
    }
    for (int i = 0; i < max_size + 1; i++) {
        dp[0][i] = 0;
    }

    for (int i = 1; i < n + 1; i++) {
        for (int j = 1; j < max_size + 1; j++) {
            if (j < W[i - 1]) {
                dp[i][j] = dp[i - 1][j];
            } else {
                dp[i][j] = max(dp[i - 1][j], dp[i - 1][j - W[i - 1]] + V[i - 1]);
            }
        }
    }
    
    for (int i = 0; i < q; i++) {
        cout << dp[n][inp[i]] << endl;
    }
    
    return 0;
}
