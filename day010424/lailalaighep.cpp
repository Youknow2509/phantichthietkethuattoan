//  http://laptrinhonline.club/problem/tichpxlailalaighep

#include <bits/stdc++.h>

using namespace std;

bool isValid(const string& chromosome) {
    for (int i = 0; i < chromosome.length() - 2; ++i) {
        if (chromosome[i] != 'A' && chromosome[i+1] != 'A' && chromosome[i+2] != 'A')
            return false;
    }
    return true;
}

void generateOffsprings(const string& father, const string& mother, vector<string>& offsprings, string current = "", int index = 0) {
    if (index == father.length()) {
        if (isValid(current))
            offsprings.push_back(current);
        return;
    }

    if (father[index] == mother[index]) {
        generateOffsprings(father, mother, offsprings, current + father[index], index + 1);
    } else {
        generateOffsprings(father, mother, offsprings, current + father[index], index + 1);
        generateOffsprings(father, mother, offsprings, current + mother[index], index + 1);
    }
}

int main() {
    string father, mother;
    cin >> father >> mother;

    vector<string> offsprings;
    generateOffsprings(father, mother, offsprings);

    sort(offsprings.begin(), offsprings.end());

    for (const auto& offspring : offsprings) {
        cout << offspring << endl;
    }

    return 0;
}
