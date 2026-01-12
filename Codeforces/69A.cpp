#include <bits/stdc++.h>
using namespace std;

int main() {

  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n, a = 0, b = 0, c = 0;
  cin >> n;
  while (n--) {
    int i, j, k;
    cin >> i >> j >> k;
    a += i;
    b += j;
    b += k;
  }
  if (a == 0 && b == 0 && c == 0)
    cout << "YES";
  else
    cout << "NO";
}