#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int a,b,x;
        cin >> a >> b >> x;
        if(a==b) {
            cout << 0 << endl;
            break;
        }
        if(a/x == b || b/x == a) {
            cout << 1 << endl;
            break;
        }
        if(a < x && b < x) {
            if(abs(a-b) == 1) {
                cout << 1 << endl;
                break;
            }
            else {
                cout << 2 << endl;
                break;
            }
        }
        int t = max(a,b);
        int m = min(a,b);
        int count = 0;
        while(1) {
            if(t==m || abs(t-m) == 1) {
                cout << count+1 << endl;
                break;
            }
            t = t/x;
            count++;
        }
    }
}