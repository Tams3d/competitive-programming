#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long n, count = 0;
    cin >> n;

    int bills[] = {100, 20, 10, 5, 1};

    for (int b : bills) {
        count += n / b;
        n %= b;
    }

    cout << count;
    return 0;
}
