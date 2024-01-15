
#include <bits/stdc++.h>

using namespace std;

int mmax(int a, int b){
    return a > b ? a : b;
}

int main(){

    int n; cin >> n;
    vector<int> vt(n);
    for (int i = 0; i < n; i++){
        cin >> vt[i];
    }

    vector<int>l(n);
    vector<int>r(n);

    partial_sum(vt.begin(), vt.end(), l.begin(), mmax);
    partial_sum(vt.rbegin(), vt.rend(), r.rbegin(), mmax);

    long res = 0;

    for (int i = 1; i < n; i++){
        res += max(min(l[i],r[i]) - vt[i], 0);
    }

    cout << res << endl;

    return 0;
}