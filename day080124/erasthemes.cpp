
#include<bits/stdc++.h>

using namespace std;

vector<int> erasthemes(int n){
    vector<int> res;
    vector<bool> isPrime(n+1, true);
    isPrime[0] = isPrime[1] = false;
    for(int i = 2; i <= n; i++){
        if(isPrime[i]){
            res.push_back(i);
            for(int j = i*i; j <= n; j += i){
                isPrime[j] = false;
            }
        }
    }
    return res;
}

int main(){
    int n; 
    cout << "Input n: "; cin >> n;
    cout << "Solve" << endl;
    vector<int> res = erasthemes(n);
    for(int i = 0; i < res.size(); i++){
        cout << res[i] << " ";
    }
    cout << endl;
    return 0;
}