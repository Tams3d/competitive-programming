#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t, x = 0;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        if (s[1] == '+')
            x++;
        else
            x--;
    }
    cout << x;
    return 0;
}