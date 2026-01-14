#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k;
    cin >> n;
    bool is_hard = false;
    for (int i = 0; i < n; i++) {
        cin >> k;
        if (k == 1) {
            is_hard = true;
            break;
        }
    }
    cout << (is_hard ? "HARD" : "EASY");
}