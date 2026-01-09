#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s, t;
    cin >> s >> t;

    bool isvalid = true;

    if (s.size() != t.size())
        isvalid = false;

    int n = s.size();
    for (int i = 0; i < n && isvalid; i++) {
        if (s[i] != t[n - 1 - i])
            isvalid = false;
    }

    cout << (isvalid ? "YES" : "NO");
    return 0;
}
