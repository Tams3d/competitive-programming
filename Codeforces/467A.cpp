#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t, room = 0;
    cin >> t;
    while (t--) {
        int p, q;
        cin >> p >> q;
        if (q - p >= 2)
            ++room;
    }
    cout << room;
}