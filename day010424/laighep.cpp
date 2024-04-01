
#include <bits/stdc++.h>

using namespace std;

string x, y;
int n = 0;
vector<string> res;

void solve(int i, string s) {
    if (i == n) {
        res.push_back(s);
        return;
    }
    if (x[i] != y[i]) {
        solve(i + 1, s + x[i]);
    }
    solve(i + 1, s + y[i]);
}

void showRes() {
    for (int i = 0; i < res.size(); i++) {
        cout << res[i] << endl;
    }
}

int main() {

    cin >> x >> y;
    n = x.length();
    for (int i = 0; i < n; i++) {
        if (x[i] > y[i]) {
            swap(x[i], y[i]);
        }
    }
    solve(0,"");
    showRes();

    return 0;
}