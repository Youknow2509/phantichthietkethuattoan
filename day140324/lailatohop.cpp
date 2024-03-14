// http://laptrinhonline.club/problem/lailatohopchapkn

#include <bits/stdc++.h>

using namespace std;

const int M = 1e9 + 7;

long long solve(long long a, long long n) {
    if (a == 0) return 0;
    if (n == 0) return 1;
    if (n % 2 == 0) {
        return solve(a * a % M, n / 2); 
    } 
    return solve(a * a % M, n / 2) * a % M;
}

int main() {

    long long A[100005] = {1, 1};
    long long B[100005] = {1, 1};
    for (int i = 1; i < 1e5; i++) {
        A[i] = A[i - 1] * i % M;
        B[i] = B[i - 1] * solve(i, M - 2) % M;
    }
    int t; cin >> t;
    long long k, n;
    while (t--) {
        cin >> n >> k;
        cout << A[n] * B[k] % M * B[n - k] % M << endl;
    }

    return 0;
}