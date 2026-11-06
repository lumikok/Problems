#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    int n;
    cin >> n;
    vector<ll> a(n);
    ll min_num = 1e6;
    ll max_num = 0;
    int count1 = 0;
    int count2 = 0;
    for(int i = 0;i < n;i++) {
        cin >> a[i];
        if(a[i] < min_num) {
            count1 = 0;
            min_num = a[i];
        }
        if(a[i] > max_num) {
            count2 = 0;
            max_num = a[i];
        }
        if(a[i] == min_num) {
            count1++;
        }
        if(a[i] == max_num) {
            count2++;
        }
    }
    cout << min_num << " " << count1 << '\n';
    cout << max_num << " " << count2 << '\n';
    return 0;
}