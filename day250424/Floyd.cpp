#include <bits/stdc++.h>

using namespace std;

int C[205][205] = {}, P[205][205] = {}, n, m;

void trace(int u, int v) {
    if (P[u][v] == 0) cout << u << " ";
    else {
        trace(u, P[u][v]);
        trace(P[u][v], v);
    }
}

int main() {

    cin.tie(0); cout.tie(0); ios::sync_with_stdio(0);

    cin >> n >> m;
    for (int i = 1; i <=n; i++) 
        for (int j = 1; j <= n; j++) if (i != j) C[i][j] = 1e9;

    for (int i = i; i <= m; i++) {
        int x, y, w;
        cin >> x >> y >> w;
        C[x][y] = w;
    }

    for (int k = 1; k <= n; k++) 
    for (int i = 1; i <= n; i++) 
    for (int j = 1; j <= n; j++) 
    if (C[i][j] > C[i][k] + C[k][j]) {
        C[i][j] = C[i][k] + C[k][j];
        P[i][j] = k;
    }
    for (int i = 1; i <= n; i++) 
    for (int j = 1; j <= n; j++) 
    if (i != j) {
        if (C[i][j] == 1e9) cout << "\n Khong co duong di " << i << " den " << j;
        else {
            cout << "\n Duong di nn" << i << " den " << j << ": "; trace(i, j);
        }
    }

    
    return 0;
}