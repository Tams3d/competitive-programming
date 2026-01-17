#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;

    bool flag = true;
    for (int i = 1; i < s.size(); i++) {
        if (islower(s[i])) {
            flag = false;
            break;
        }
    }

    if (flag) {
        for (char &c : s) {
            c = islower(c) ? toupper(c) : tolower(c);
        }
    }

    cout << s;
    return 0;
}
