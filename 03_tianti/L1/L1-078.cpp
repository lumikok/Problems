#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    cin >> n >> m;
    cin.ignore();
    int count = 0;
    string ans;
    for(int i = 0;i < n;i++) {
        string s;
        getline(cin,s);
        if(s.find("qiandao") != string::npos || s.find("easy") != string::npos) {
            continue;
        }
        count++;
        if(count == m+1) ans = s;
    }
    if(count <= m) cout << "Wo AK le\n";
    else cout << ans << '\n';
    return 0;
}