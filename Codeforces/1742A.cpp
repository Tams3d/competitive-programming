#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, b, c, t;
    cin >> t;
    while (t--) {
        cin >> a >> b >> c;
        if (a == (b + c) || b == (a + c) || c == (b + a))
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}