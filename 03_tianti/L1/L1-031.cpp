#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s1 = "You are wan mei!\n";
    string s2 = "You are tai shou le!\n";
    string s3 = "You are tai pang le!\n";

    int n;
    cin >> n;
    while(n--) {
        int h,w;
        cin >> h >> w;
        double st = (h-100) * 0.9;
        double W = w / 2.0;
        if (abs(W-st) < (st * 0.1)) {
            cout << s1;
        } else {
            if(W > st) cout << s3;
            else cout << s2;
        }
    }
    return 0;
}