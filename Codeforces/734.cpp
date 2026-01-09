#include <bits/stdc++.h>
using namespace std;

int main()
{

    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    string game;
    cin >> game;
    int p1 = 0, p2 = 0;
    for (char ch : game)
        if (ch == 'A')
            p1++;
        else
            p2++;
    if (p1 > p2)
        cout << "Anton";
    else if (p1 == p2)
        cout << "Friendship";
    else
        cout << "Danik";
}