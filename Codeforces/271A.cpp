#include <bits/stdc++.h>
using namespace std;

bool allDistinct(int y) {
    bool seen[10] = {};
    while (y) {
        int d = y % 10;
        if (seen[d])
            return false;
        seen[d] = true;
        y /= 10;
    }
    return true;
}

int main() {
    int year;
    cin >> year;
    while (!allDistinct(++year)) {
    };
    cout << year;
}
