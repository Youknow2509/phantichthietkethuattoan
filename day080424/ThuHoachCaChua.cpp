// http://laptrinhonline.club/problem/tichpxcachua

#include <bits/stdc++.h>

using namespace std;

int main() {

    int n, k; cin >> n >> k;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) cin >> arr[i];
    sort(arr.begin(), arr.end(), greater<int>());

    int res = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] - i*k <= 0) break;
        res += arr[i] - i*k;
    }

    cout << res << endl;

    return 0;
}