
#include<bits/stdc++.h>

using namespace std;

set<string> res;

void tach(string s) {
    if (s =="") return;
    if (res.find(s) == res.end()) {
        res.insert(s);
        tach(s.substr(0, s.size() - 1));
        tach(s.substr(1, s.size() - 1));
    }
}

void run() {
    string s; cin >> s;
    tach(s);
    for (auto i: res) cout << i << endl;
}

int main() {

    run();

    return 0;
}