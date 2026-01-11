#include <bits/stdc++.h>
using namespace std;

int main()
{

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long m,n,a;
    cin>>m>>n>>a;
    long long len = (m + a - 1) / a;
    long long wid = (n + a - 1) / a;
    cout<<len*wid;

}