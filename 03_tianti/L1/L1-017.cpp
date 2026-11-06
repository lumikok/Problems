#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    double x = 1.0;
    int cnt = 0;
    int n = s.size();
    if(s[0] == '-') {
        x *= 1.5;
        n--;
    }

    for(char c : s) {
        if(c == '2') {
            cnt++;
        }
    }

    int last = s.back() - '0';
    if(last % 2 == 0) {
        x *= 2.0;
    }

    double ans = (double)cnt / n * x * 100;
    cout << fixed << setprecision(2) << ans << "%\n";
    return 0;
}