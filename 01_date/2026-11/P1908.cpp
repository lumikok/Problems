#include <bits/stdc++.h>
using namespace std;

using ll = long long;

const int maxn = 5e5 + 5;
ll a[maxn],tmp[maxn];
ll ans = 0;

// 归并排序统计逆序对
void merge_sort(int l,int r) {
    if(l >= r) return;

    int mid = (l + r) / 2;
    merge_sort(l,mid);
    merge_sort(mid+1,r);

    int i = l,j = mid+1,k = l;
    while(i <= mid && j <= r) {
        if(a[i] <= a[j]) {
            tmp[k++] = a[i++];
        } else {
            tmp[k++] = a[j++];
            ans += mid - i + 1;
        }
    }
    while(i <= mid) {
        tmp[k++] = a[i++];
    }
    while(j <= r) {
        tmp[k++] = a[j++];
    }
    for(int p = l;p <= r;p++) {
        a[p] = tmp[p];
    }
}

void solve() {
    int n;
    cin >> n;
    for(int i = 1;i <= n;i++) {
        cin >> a[i];
    }
    merge_sort(1,n);
    cout << ans << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T = 1;
    // cin >> T;
    while (T--) {
        solve();
    }
    return 0;
}