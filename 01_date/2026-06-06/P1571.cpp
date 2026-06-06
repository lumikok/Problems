// 洛谷
// 二分，模拟，排序
// 第一遍：?? - 无思路
#include <bits/stdc++.h>
using namespace std;
int n,m;
int a[100010],b[100010];
bool binary_search(int x) {
    int l = 0,r = m;
    while(l <= r) {
        int mid = (l + r) >> 1;
        if(b[mid] == a[x]) return 1;
        if(b[mid-1] < a[x] && b[mid+1] > a[x]) return 0;
        if(b[mid] > a[x]) r = mid;
        else l = mid+1;
    }
    return 0;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cin >> n >> m;
    for(int i = 0;i < n;i++) {
        cin >> a[i];
    }
    for(int i = 0;i < m;i++) {
        cin >> b[i];
    }
    sort(b,b+m);
    for(int i = 0;i < n;i++) {
        if(binary_search(i)) cout << a[i] << " ";
    }
    return 0;
}