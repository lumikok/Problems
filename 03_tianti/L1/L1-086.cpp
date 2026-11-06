#include <bits/stdc++.h>
using namespace std;

string solve(string a)
{
    string s;

    for(int i = 1; i < a.size(); i++) {
        if((a[i] - '0') % 2 == (a[i-1] - '0') % 2) {
            s += max(a[i], a[i-1]);
        }
    }

    return s;
}

int main()
{
    string s1,s2;
    cin >> s1;
    cin >> s2;
    string ans_1 = solve(s1);
    string ans_2 = solve(s2);
    if(ans_1 == ans_2) {
        cout << ans_1 << '\n';
    } else {
        cout << ans_1 << '\n' << ans_2 << '\n';
    }
    return 0;
}