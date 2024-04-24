// http://laptrinhonline.club/problem/khmtk63e6

#include <bits/stdc++.h>

using namespace std;

int main() {

    cin.tie(0); cout.tie(0); ios::sync_with_stdio(0);

    string s; cin >> s;
    long long n = s.size();
    long long arr[n + 1];
    long long res = 0;
    vector<int> v;

    arr[0] = (s[0] == 'O') ? 1 : 0;
    for (long long i = 1; i < n; i++) {
        if (s[i] == 'O') {
            arr[i] = arr[i - 1] + 1;
        } else {
            if (s[i] == 'A') {
                v.push_back(i);
            }
            arr[i] = arr[i - 1];
        }
    }
    

    for (int i = 0; i < v.size(); i++) {
        res += arr[v[i] - 1] * (arr[n - 1] - arr[v[i]]);
    }

    cout << res;
    
    return 0;
}