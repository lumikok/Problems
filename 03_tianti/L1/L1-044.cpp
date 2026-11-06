#include <bits/stdc++.h>
using namespace std;

int main()
{
    int k;
    cin >> k;
    int cnt = 0;
    while(1) {
        string s;
        cin >> s;
        if(s == "End") {
            break;
        }
        cnt++;
        if(cnt == k+1) {
            cnt = 0;
            cout << s << '\n';
            continue;
        }
        if(s == "ChuiZi") {
            cout << "Bu" << '\n';
        } else if(s == "JianDao") {
            cout << "ChuiZi" << '\n';
        } else {
            cout << "JianDao" << '\n';
        }
    }
    return 0;
}