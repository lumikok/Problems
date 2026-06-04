#include <bits/stdc++.h>
using namespace std;

const int N = 25;
int n,k;
int arr[N];
int ans = 0;
bool is_prime(int x) {
    for(int i = 2;i * i <= x;i++) {
        if(x % i == 0) {
            return false;
        }
    }
    return true;
}

void dfs(int idx,int selected,long long sum) {
    if(selected == k) {
        if(is_prime(sum)) {
            ans++;
        }
        return;
    }

    if(n - idx + 1 < k - selected) {
        return;
    }

    dfs(idx+1,selected+1,sum + arr[idx]);
    dfs(idx+1,selected,sum);
}

int main() {
    cin >> n >> k;
    for(int i = 1;i <= n;i++) {
        cin >> arr[i];
    }
    dfs(1,0,0);
    cout << ans << endl;
    return 0;
}