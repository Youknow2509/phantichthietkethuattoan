
#include <bits/stdc++.h>

using namespace std;

long long tohop(int a, int b) {
    if (b == 0 || a == b) return 1;
    return tohop(a - 1, b - 1) + tohop(a - 1, b);
}

int main() {

    return 0;
}