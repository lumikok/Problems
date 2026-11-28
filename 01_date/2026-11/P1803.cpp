#include <bits/stdc++.h>
using namespace std;

struct test {
    int begin_time;
    int end_time;

    bool operator<(const test &t) const {
        return end_time < t.end_time;
    }
};

int main()
{
    int n;
    cin >> n;
    vector<test> t(n);
    for(int i = 0;i < n;i++) {
        cin >> t[i].begin_time >> t[i].end_time;
    }
    sort(t.begin(),t.end());
    int ans = 1;
    int cnt = 0;
    for(int i = 1;i < n;i++) {
        if(t[i].begin_time >= t[cnt].end_time) {
            ans++;
            cnt = i;
        }
    }
    cout << ans;
    return 0;
}