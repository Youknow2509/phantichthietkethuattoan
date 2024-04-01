// http://laptrinhonline.club/problem/tichpxhoanvilap

#include <bits/stdc++.h>

using namespace std;

map<char, int> mp;
int n;
string s;

void solve(string x) {
    if (x.size() == n) {
        cout << x << endl;
    }
    else {
        for (map<char, int>::iterator it = mp.begin(); it != mp.end(); it++) {
            if (it->second > 0) {
                it->second--;
                solve(x + it->first);
                it->second++;
            }
        }
    }
}

int main() {
    cin >> s;
    n = s.size();
    for (int i = 0; i < n; i++) {
        mp[s[i]]++;
    }
    solve("");
    return 0;
}