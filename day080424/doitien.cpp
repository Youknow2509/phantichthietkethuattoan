// http://laptrinhonline.club/problem/238953
#include<bits/stdc++.h>

using namespace std;

int main() {

    long long a[]= {500000,200000,100000,50000,20000,10000,5000,2000,1000}, t, res = 0;
    cin >> t;
    for (int i = 0; i < 9; i++){
        res += t/a[i];
        t %= a[i];  
    }
    if(t){
        cout << -1;
        return 0;
    }
    cout << res;
        
    return 0;
}