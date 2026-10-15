// 21min
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vector<int> gain;
        string s;
        cin >> s;
        ll ans = 0;
        for(int i = 0;i < n;i++) {
            int m = 0;
            if(s[i] == 'L') {
                m = n - i - 1 - i;
                ans += i;
            }
            else {
                m = i - n + i + 1;
                ans += n - i - 1;
            }
            gain.push_back(m);
        }
        sort(gain.begin(),gain.end(),greater<int>());
        for(int k = 0;k < n;k++) {
            if(gain[k] > 0) ans += gain[k];

            cout << ans << " ";
        }
        cout << '\n';
    }
    return 0;
}