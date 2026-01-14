#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin >> s;
    int count[3] = {0};

    for (char c : s)
        if (c != '+')
            ++count[c - '1'];

    bool first = true;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < count[i]; j++) {
            if (!first)
                cout << '+';
            cout << i + 1;
            first = false;
        }
    }
    cout << '\n';
}
