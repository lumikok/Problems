#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a1,a2,n;
    cin >> a1 >> a2 >> n;
    vector<int> a;
    a.push_back(a1);
    a.push_back(a2);
    int i = 0;
    int j = 1;
    while(a.size() <= n) {
        int ans = a[i] * a[j];
        i++;
        j++;
        if(ans >= 10) {
            int t1 = ans % 10;
            int t2 = ans / 10;
            a.push_back(t2);
            a.push_back(t1);
        } else {
            a.push_back(ans);
        }
    }
    for(int i = 0;i < n;i++) {
        if(i > 0) {
            cout << " ";
        }
        cout << a[i];
    }
    return 0;
}