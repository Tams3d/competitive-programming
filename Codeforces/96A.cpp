#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin >> s;

    int count = 1;
    bool flag = false;

    for (int i = 1; i < s.size(); i++) {
        if (s[i] == s[i - 1]) {
            count++;
            if (count >= 7) {
                flag = true;
                break;
            }
        } else {
            count = 1;
        }
    }

    if (flag)
        cout << "YES";
    else
        cout << "NO";

    return 0;
}
