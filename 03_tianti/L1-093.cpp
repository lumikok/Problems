#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i = 0;i < n;i++) {
        cin >> a[i];
    }
    int k;
    cin >> k;
    while(k--) {
        int count = 0;
        int success = 0;
        int failed = 0;
        for(int i = 0;i < n;i++) {
            int t;
            cin >> t;
            if(t == 0) {
                count++;
                continue;
            }
            if(t == a[i]) success++;
            if(t != a[i]) failed++;
        }
        if(count == n || failed >= 1) {
            cout << "Ai Ya\n";
        } else {
            cout << "Da Jiang!!!\n";
        }
    }
    return 0;
}