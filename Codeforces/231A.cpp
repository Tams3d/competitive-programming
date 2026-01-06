#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t, sum = 0;
    cin >> t;
    while (t--) {
        int a, b, c;
        cin >> a >> b >> c;
        sum += (a + b + c) > 1;
    }
    cout << sum;
    return 0;
}