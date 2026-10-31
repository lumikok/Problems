#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    priority_queue<int,vector<int>,greater<int>> pq;
    int n;
    cin >> n;
    for(int i = 0;i < n;i++) {
        int a;
        cin >> a;
        pq.push(a);
    }
    ll ans = 0;

    while(pq.size() > 1) {
        ll a = pq.top();
        pq.pop();
        ll b = pq.top();
        pq.pop();

        ll sum = a + b;
        ans += sum;
        pq.push(sum);
    }
    cout << ans << '\n';
    return 0;
}