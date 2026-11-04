#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    cin >> n >> m;
    while(n--) {
        double p;
        cin >> p;
        if(p < m) cout << "On Sale! " << fixed << setprecision(1) << p << '\n';
    }
    return 0;
}