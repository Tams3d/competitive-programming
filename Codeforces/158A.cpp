#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k;
    cin >> n >> k;

    int cutoff = 0, qualify = 0;

    for (int i = 0; i < n; ++i) {
        int x;
        cin >> x;
        if (i == k - 1)
            cutoff = x;
        if (x > 0 && x >= cutoff)
            ++qualify;
    }

    cout << qualify;
}
