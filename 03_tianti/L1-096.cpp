#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    int n;
    cin >> n;
    while(n--) {
        ll a,b;
        cin >> a >> b;
        string s1 = to_string(a);
        string s2 = to_string(b);
        ll ans1 = 0,ans2 = 0;
        for(int i = 0;i < (int)s1.size();i++) {
            ans1 += s1[i] - '0';
        }
        for(int i = 0;i < (int)s2.size();i++) {
            ans2 += s2[i] - '0';
        }
        if((a % ans2 == 0 && b % ans1 == 0) || (a % ans2 != 0 && b % ans1 != 0)) {
            if(a > b) cout << "A\n";
            else cout << "B\n";
            continue;
        }
        if(a % ans2 == 0) {
            cout << "A\n";
            continue;
        }
        if(b % ans1 == 0) {
            cout << "B\n";
            continue;
        }
    }
    return 0;
}