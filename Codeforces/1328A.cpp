#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        long long a, b;
        cin >> a >> b;
        long long rem = a % b;
        if (rem == 0)
            cout << 0 << "\n";
        else
            cout << b - rem << "\n";
    }
}
