#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    while(n--) {
        int m;
        cin >> m;
        string s;
        cin >> s;
        int ans = 0;
        int count = 0;
        for(char c : s) {
            if(c == '*') count = 0;
            else  {
                count++;
                ans = max(count,ans);
            }
        }
        cout << (ans + 1) / 2 << endl;
    }
    return 0;
}