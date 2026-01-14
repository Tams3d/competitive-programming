#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin >> s;

    int freq[26] = {0};
    int distinct = 0;
    for (char c : s)
        freq[c - 'a']++;

    for (int x : freq)
        if (x > 0)
            distinct++;

    if (distinct & 1)
        cout << "IGNORE HIM!";
    else
        cout << "CHAT WITH HER!";
}
