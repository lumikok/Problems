#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    while(n--) {
        string s;
        int a,b;
        cin >> s >> a >> b;
        if(a < 15 || a > 20) {
            cout << s << '\n';
            continue;
        }
        if(b < 50 || b > 70) {
            cout << s << '\n';
        }
    }
    return 0;
}