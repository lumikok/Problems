#include <bits/stdc++.h>
using namespace std;

struct Node {
    string name;
    int x;
};

typedef long long ll;

int main()
{
    int n;
    cin >> n;
    vector<Node> a(n);
    ll sum = 0;
    for(int i = 0;i < n;i++) {
        cin >> a[i].name >> a[i].x;
        sum +=a[i].x;
    }
    ll average = (sum / n) / 2;
    string ans = a[0].name;
    int cnt = abs(a[0].x - average);
    for(int i = 1;i < n;i++) {
        if(cnt > abs(a[i].x - average)) {
            cnt = abs(a[i].x - average);
            ans = a[i].name;
        }
    }
    cout << average << " " << ans << '\n';
    return 0;
}