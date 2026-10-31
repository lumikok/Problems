#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s,a,b;
    int cnt = 0;

    while(cin >> s && s != ".") {
        cnt++;

        if(cnt == 2) a = s;
        if(cnt == 14) b = s;
    }

    if (cnt < 2) cout << "Momo... No one is for you ...\n";
    else if (cnt >= 14) cout << a << " and " << b << " are inviting you to dinner...\n";
    else cout << a << " is the only one for you...\n";
    return 0;
}