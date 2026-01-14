#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int a, b, year = 0;
    cin >> a >> b;
    while (a <= b) {
        a = 3 * a;
        b = 2 * b;
        ++year;
    }
    cout << year;
}