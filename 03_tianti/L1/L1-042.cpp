#include <bits/stdc++.h>
using namespace std;

int main()
{
    int m, d, y;
    char c1, c2;

    cin >> m >> c1 >> d >> c2 >> y;

    cout << setfill('0')
         << setw(4) << y << "-"
         << setw(2) << m << "-"
         << setw(2) << d << '\n';

    return 0;
}
