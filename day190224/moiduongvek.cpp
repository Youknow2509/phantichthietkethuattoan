
#include <bits/stdc++.h>

using namespace std;

bool find(vector<int> a, int x){
    for (int i = 0; i < a.size(); i++){
         if (a[i] == x) {
            return true;
        }
    }
    return false;
}

void print(vector<int> a){
    for (int i = 0; i < a.size(); i++){
        cout << a[i] << " ";
    }
    cout << endl;
}

void solve (int x, vector<int> &next, stack<int> &st, vector<int> &res){
    if (!st.empty()) {
        st.pop();
        for (int i = 1; i*i <= x; i++){ // looi tim nghiem
            if (x % i == 0){
                int t = (i - 1)*(x/i + 1);
                next.push_back(t);
                if (!find(res, t)) {
                    st.push(t);
                    res.push_back(st.top());
                }
            }
        
        }
        solve(st.top(), next, st, res);
    }
}

int main() {

    int n; n = 18;

    stack<int> st;
    vector<int> res;
    vector<int> next;

    st.push(n);
    res.push_back(n);

    solve(st.top(), next, st, res);

    print(res);
    
    return 0;
}