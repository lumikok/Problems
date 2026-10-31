#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    while(n--) {
        char c;
        double h;
        cin >> c >> h;
        if(c == 'M') cout << fixed << setprecision(2) << h/1.09 << '\n';
        else cout << fixed << setprecision(2) << h * 1.09 << '\n';
    }
    return 0;
}