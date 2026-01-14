#include <bits/stdc++.h>
#include <cctype>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int lwr = 0;
    string s;
    cin >> s;
    for (char c : s)
        if (islower(c))
            ++lwr;
    for (char &c : s)
        if (lwr >= (s.size() - lwr))
            c = tolower(c);
        else
            c = toupper(c);

    cout << s;
}