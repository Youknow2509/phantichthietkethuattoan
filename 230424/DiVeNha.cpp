// http://laptrinhonline.club/problem/khmtk63e3

#include <bits/stdc++.h>

using namespace std;

int res = 1e9;
int n, d;
string s;
int lenS;
bool visited[100001];

void solve(int i, int c) {
    if (i == lenS) {
        res = min(res, c);
        return;
    } 
    for (int j = d; j >= 1; j--) {
        if (i + j <= lenS) {
            if (s[i + j] == '1' && !visited[i + j]) {
                c++;
                visited[i + j] = true;
                solve(i + j, c);
                c--;
            }
        }
    }
}

int main() {

    cin.tie(0); cout.tie(0); ios::sync_with_stdio(0);

    cin >> n >> d;

    cin >> s;
    lenS = s.size() - 1;

    fill(visited, visited + 100001, false);
    solve(0, 0);

    if (res == 1e9) cout << -1;
    else
        cout << res;
    
    return 0;
}