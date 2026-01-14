#include <bits/stdc++.h>
using namespace std;

bool is_lucky(int x) {
    while (x > 0) {
        int last = x % 10;
        if (last != 4 && last != 7)
            return false;
        x /= 10;
    }
    return true;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    bool flag = false;

    for (int i = 1; i <= n; i++) {
        if (is_lucky(i) && n % i == 0) {
            flag = true;
            break;
        }
    }

    if (flag)
        cout << "YES";
    else
        cout << "NO";

    return 0;
}
