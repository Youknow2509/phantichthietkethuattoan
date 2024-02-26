
#include <bits/stdc++.h>

using namespace std;

vector<vector<int> > vt(205, vector<int>(205));
int m = 0
    , n = 0;


int dfs(int, int);

int main() {

    #ifndef ONLINE_JUDGE
    freopen("../io/input.txt", "r", stdin);
    freopen("../io/output.txt", "w", stdout);
    #endif
    cin >> m >> n;
    vector<int> count; // Đếm số phân vùng ảnh

    // Read input
    for (int i = 0; i < m; i++){
        for (int j = 0; j < n; j++){
            cin >> vt[i][j];
        }
    }
    
    // find elements 0 and solve 
    for (int i = 0; i < m; i++){
        for (int j = 0; j < n; j++){
            if (vt[i][j] == 0){
                int t = dfs(i, j);
                count.push_back(t);
            }
        }
    }
    // Output
    cout << count.size() << endl;
    sort(count.begin(), count.end());
    for (int i = 0; i < count.size(); i++){
        cout << count[i] << " ";
    }

    return 0;
}

int dfs(int i, int j){
    if (i < 0 || i >= m || j < 0 || j >= n || vt[i][j] == 1){
        return 0;
    }
    vt[i][j] = 1;
    return 1 + dfs(i, j - 1) + dfs(i, j + 1)
        + dfs(i - 1, j - 1) + dfs(i - 1, j) + dfs(i - 1, j + 1)
        + dfs(i + 1, j - 1) + dfs(i + 1, j) + dfs(i + 1, j + 1);
}