#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int cnt[4] = {0};
    for(char c : s) {
        c = toupper((unsigned char)c);
        if(c == 'G') cnt[0]++;
        if(c == 'P') cnt[1]++;
        if(c == 'L') cnt[2]++;
        if(c == 'T') cnt[3]++;
    }
    string target = "GPLT";
    while(cnt[0] || cnt[1] || cnt[2] || cnt[3]) {
        for(int i = 0;i < 4;i++) {
            if(cnt[i]) {
                cout << target[i];
                cnt[i]--;
            }
        }
    }
}