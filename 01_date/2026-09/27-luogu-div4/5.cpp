#include <bits/stdc++.h>
using namespace std;

int h,w;
vector<vector<int>> a;

int get_ans() {
    int ans = 0;
    for(int i = 0;i < h;i++) {
        for(int j = 0;j < w;j++) {
            if(i + 1 < h && a[i][j] == a[i+1][j]) {
                ans++;
            }
            if(j + 1 < w && a[i][j] == a[i][j+1]) {
                ans++;
            }
        }
    }
    return ans;
}

int main() {
    cin >> h >> w;
    a.resize(h,vector<int>(w));
    for(int i = 0;i < h;i++) {
        for(int j = 0;j < w;j++) {
            cin >> a[i][j];
        }
    }
    long long ans = get_ans();
    for(int i = 0;i < h;i++) {
        for(int j = 0;j < w;j++) {
            int tmp = a[i][j];
            for(int k = 1;k <= 3;k++) {
                if(tmp == k) continue;
                a[i][j] = k;
                ans = max(ans,(long long)get_ans());
                a[i][j] = tmp;
            }
        }
    }
    cout << ans << endl;
}