#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    if(n == 5) cout << 7 << '\n';
    else cout << (n + 2) % 7 << '\n';
    return 0;
}