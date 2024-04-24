// http://laptrinhonline.club/problem/khmtk63e4

#include <bits/stdc++.h>

using namespace std;

int main() {

    cin.tie(0); cout.tie(0); ios::sync_with_stdio(0);

    string s; cin >> s;
    vector<int> a;
    for (int i = 0; i < s.size(); i++) {
        if (i % 2 == 0) {
            a.push_back(s[i] - '0');
        }
    }

    sort(a.begin(), a.end());    

    for (int i = 0; i < a.size(); i++) {
        cout << a[i];
        if (i < a.size() - 1) {
            cout << "+";
        }
    }

    return 0;
}