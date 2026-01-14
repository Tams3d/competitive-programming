#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    long long n, k;
    cin >> n >> k;

    long long n_odd = (n + 1) / 2;
    if (k <= n_odd)
        cout << 2 * k - 1;
    else
        cout << 2 * (k - n_odd);
}