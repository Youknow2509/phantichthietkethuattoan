
#include<bits/stdc++.h>

using namespace std;

long long solve(vector<long long> vt, long long n){
    long long  res = 0;
    long long m = vt[n-1];
    for (long long i = n - 2; i >= 0; i--){
        if (m < vt[i]){
            m = vt[i];
        }
        else {
            res += m - vt[i];
        }
    }
    return res;
}

/* void run(){
    cout << "Input size arr: ";
    long long n; cin >> n;
    vector<long long> vt(n);
    cout << "Input arr: ";
    for (long long i = 0; i < n; i++){
        cin >> vt[i];
    }

    cout << "Solve: " << solve(vt, n) << endl;
} */

int main(){

    cout << "Input size arr: ";
    long long n; cin >> n;
    vector<long long> vt(n);
    cout << "Input arr: ";
    for (long long i = 0; i < n; i++){
        cin >> vt[i];
    }

    cout << "Solve: " << solve(vt, n) << endl;

    return 0;
}