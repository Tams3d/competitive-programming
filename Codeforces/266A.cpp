#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, count = 0;
    string s;
    cin >> n;
    cin >> s;

    for (int i = 1; i < n; i++) {
        if (s[i] == s[i - 1])
            ++count;
    }
    cout << count;
}