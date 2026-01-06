#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int row, col;
    for (int i = 0; i < 5; ++i)
        for (int j = 0; j < 5; ++j) {
            int x;
            cin >> x;
            if (x == 1) {
                row = i;
                col = j;
            }
        }

    cout << abs(row - 2) + abs(col - 2);
}
