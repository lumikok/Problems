// CF
// สýังฃฌ800

#include <bits/stdc++.h>
using namespace std;

int main() {
    int k,n;
    cin >> k;
    while(k--) {
        cin >> n;
        for(int i = 1;i <= n;i++) {
            cout << i*2 - 1 << " ";
        }
        cout << endl;
    }
}