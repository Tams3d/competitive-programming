#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    string s;
    cin >> s;
    set<char> letters;

    for (char c : s) {
        letters.insert(tolower(c));
    }

    if (letters.size() == 26)
        cout << "YES";
    else
        cout << "NO";
    return 0;
}
