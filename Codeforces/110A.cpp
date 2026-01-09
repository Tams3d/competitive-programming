#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long n;
    cin >> n;

    int count = 0;
    bool islucky = true;

    while (n) {
        int d = n % 10;
        if (d == 4 || d == 7)
            count++;
        n /= 10;
    }

    if (count == 0)
        islucky = false;

    while (count) {
        int d = count % 10;
        if (d != 4 && d != 7)
            islucky = false;
        count /= 10;
    }

    cout << (islucky ? "YES" : "NO");
    return 0;
}
