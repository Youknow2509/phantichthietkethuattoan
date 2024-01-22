#include <bits/stdc++.h>
using namespace std;

void thn(int n, char A, char B, char C, int &step) {
    if (n == 1) {
        cout << "Buoc" << step++ << " Chuyen dia 1 tu " << A << " sang " << B << endl;
        return;
    }
    thn(n - 1, A, C, B, step);
    cout << "Buoc" << step++ << " Chuyen dia " << n << " tu " << A << " sang " << B << endl;
    thn(n - 1, C, B, A, step);
}

int main() {
    int n;
    cin >> n;
    int step = 1;  
    thn(n, 'A', 'B', 'C', step);
    return 0;
}
