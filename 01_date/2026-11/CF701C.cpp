// 最短覆盖子串问题
#include <bits/stdc++.h>
using namespace std;

int cnt[128] = {};

int main()
{
    int n;
    string s;
    cin >> n >> s;
    set<char> st;

    for(char c : s) {
        st.insert(c);
    }
    int need = st.size();

    int have = 0;
    int l = 0;
    int ans = n;

    for(int r = 0;r < n;r++) {
        if(cnt[s[r]] == 0) {
            have++;
        }
        cnt[s[r]]++;

        while(have == need) {
            ans = min(ans,r - l + 1);
            unsigned char left = s[l];
            cnt[left]--;

            if(cnt[left] == 0) {
                have--;
            }
            l++;
        }
    }
    cout << ans << '\n';
    return 0;
}