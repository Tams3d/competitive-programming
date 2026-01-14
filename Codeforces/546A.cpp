#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k, w, amt = 0;
    cin >> k >> n >> w;
    amt = (k * w * (w + 1)) / 2;
    cout << max(amt - n, 0);
}