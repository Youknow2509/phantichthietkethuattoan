
#include <bits/stdc++.h>

using namespace std;

long long Fib(int n) {
    if (n == 0) return 0;
    if (n == 1) return 1;
    return Fib(n - 1) + Fib(n - 2);
}

int main() {

    cout << Fib(10) << endl;

    return 0;
}