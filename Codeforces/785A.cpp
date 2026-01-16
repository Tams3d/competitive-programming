#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, side = 0;
    cin >> n;

    while (n--) {
        string shape;
        cin >> shape;
        if (shape == "Tetrahedron")
            side += 4;
        else if (shape == "Cube")
            side += 6;
        else if (shape == "Octahedron")
            side += 8;
        else if (shape == "Dodecahedron")
            side += 12;
        else if (shape == "Icosahedron")
            side += 20;
    }
    cout << side;
}