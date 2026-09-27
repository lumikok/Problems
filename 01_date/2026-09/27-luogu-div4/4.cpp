// 字符串转数字 stoi()。将字符串转换为整数。
#include <bits/stdc++.h>
using namespace std;

int is_prime(int n) {
    if(n < 2) return 0;
    for(int i = 2;i <= sqrt(n);i++) {
        if(n % i == 0) return 0;
    }
    return 1;
}

int main() {
    string s;
    cin >> s;
    long long ans = 0;
    for(int i = 0;i+1 < s.length();i++) {
        string t = s.substr(i,2);
        if(is_prime(stoi(t))) {
            ans += stoi(t);
        } else {
            continue;
        }
    }
    cout << ans << endl;
    return 0;
}