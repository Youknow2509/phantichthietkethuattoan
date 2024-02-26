
#include <bits/stdc++.h>

using namespace std;

vector<vector<int> > vt(205, vector<int>(205));
int m = 0
    , n = 0;


void dfs(int, int);

int main() {

    #ifndef ONLINE_JUDGE
    freopen("../io/input.txt", "r", stdin);
    freopen("../io/output.txt", "w", stdout);
    #endif
    cin >> m >> n;
    int count = 0; // Đếm số phân vùng ảnh

    // Read input
    for (int i = 0; i < m; i++){
        for (int j = 0; j < n; j++){
            cin >> vt[i][j];
        }
    }
    
    // find elements 0 and solve 
    // Xoá phần hở
    for (int i = 0; i < m; i++) {
        if (vt[0][i] == 0){
            dfs(0, i);
        }
        if (vt[m - 1][i] == 0){
            dfs(m - 1, i);
        }
    }
    for (int j = 0; j < n; j++) {
        if (vt[j][0] == 0){
            dfs(j, 0);
        }
        if (vt[j][n - 1] == 0){
            dfs(j, n - 1);
        }
    }

    for (int i = 0; i < m; i++){
        for (int j = 1; j < n - 1; j++){
            if (vt[i][j] == 0){
                dfs(i, j);
                count++;
            }
        }
    }
    // Output
    cout << count << endl;
    
    return 0;
}

void dfs(int i, int j){
    if (i < 0 || i >= m || j < 0 || j >= n || vt[i][j] == 1){
        return;
    }
    vt[i][j] = 1;
    dfs(i - 1, j);
    dfs(i, j - 1);
    dfs(i, j + 1);
    dfs(i + 1, j);
}