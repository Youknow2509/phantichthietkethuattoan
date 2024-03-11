
#include <bits/stdc++.h>

using namespace std;

double Sin(double x);
double Cos(double x);

int main() {

    for (double x = -5; x <= 5; x += 0.5) {
        cout << "Sin(" << x << ") = " << Sin(x) << endl;
        cout << "Cos(" << x << ") = " << Cos(x) << endl;
    }

    return 0;
}
double Sin(double x) {
    if (abs(x) < 1e-4) return x;
    return 2 * Sin(x / 2) * Cos(x / 2);
}
double Cos(double x) {
    if (abs(x) < 1e-4) return 1;
    return 2 * Cos(x / 2) * Cos(x / 2) - 1;
}