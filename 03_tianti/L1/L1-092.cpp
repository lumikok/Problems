#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    while(n--) {
        int a,b,c;
        cin >> a >> b >> c;
        if(c == a*b) cout << "Lv Yan\n";
        else if (c == a+b) cout << "Tu Dou\n";
        else cout << "zhe du shi sha ya!\n";
    }
    return 0;
}