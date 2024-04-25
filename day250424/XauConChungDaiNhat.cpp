// http://laptrinhonline.club/problem/tichpxxccdn
#include <bits/stdc++.h>

using namespace std;

int dp[10001][10001];
string a, b;
int size_a, size_b;

int main() {

    ios::sync_with_stdio(0);

    cin >> a >> b;
    size_a = a.length(); size_b = b.length();
    
    for (int i = 0; i < size_b; i++) dp[0][i] = 0;
    for (int i = 0; i < size_a; i++) dp[i][0] = 0;

    for (int i = 1; i <= size_a; i++) {
        for (int j = 1; j <= size_b; j++) {
            if (a[i - 1] == b[j - 1]) {
                dp[i][j] = dp[i - 1][j - 1] + 1;
            } else {
                dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
            }
        }    
    }

    cout << dp[size_a][size_b] << endl; 
    
    return 0;
}