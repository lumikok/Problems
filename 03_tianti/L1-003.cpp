#include <bits/stdc++.h>
using namespace std;

int cnt[10] = {0};

int main() {
    string s;
    cin >> s;

    for(int i = 0;s[i] != '\0';i++) {
        cnt[s[i] - '0']++;
    }
    for(int i = 0;i < 10;i++) {
        if(cnt[i] > 0) {
            cout << i << ":" << cnt[i] << endl;
        }
    }
    return 0;
}