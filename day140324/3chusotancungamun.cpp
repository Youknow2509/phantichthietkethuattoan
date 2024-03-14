// http://laptrinhonline.club/problem/tichpxbacstc
#include <bits/stdc++.h>

using namespace std;

const int M = 1000;

long long solve(long long a, long long n) {
    if (a == 0) return 0;
    if (n == 0) return 1;
    if (n % 2 == 0) {
        return solve(a * a % M, n / 2); 
    } 
    return solve(a * a % M, n / 2) * a % M;
}

int main() {

    long long a, n;
    cin >> a >> n;
    a %= M;
    n %= 400;
    if (n == 0) {
        n = 400;
    }
    cout << setw(3) << setfill('0') << solve(a, n) << endl;

    return 0;
}