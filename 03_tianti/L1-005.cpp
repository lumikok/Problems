#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<string> s(n+1);
    vector<int> a(n+1);
    for(int i = 1;i <= n;i++) {
        string b;
        int c,d;
        cin >> b >> c >> d;
        s[c] = b;
        a[c] = d; 
    }
    int m;
    cin >> m;
    while(m--) {
        int e;
        cin >> e;
        cout << s[e] << " " << a[e] << '\n';
    }
    return 0;
}