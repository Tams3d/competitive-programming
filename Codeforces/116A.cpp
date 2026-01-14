#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    int capacity = 0;
    int current = 0;
    while (t--) {
        int a, b;
        cin >> a >> b;
        current += (b - a);
        capacity = max(current, capacity);
    }
    cout << capacity;
}