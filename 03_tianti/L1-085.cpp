// 需要重新做
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a[6];
    int n;

    for(int i = 0; i < 6; i++) {
        cin >> a[i];
    }

    cin >> n;

    int x = 7 - n;

    for(int i = 0; i < 6; i++) {
        if(a[i] < x) {
            cout << x;
        } else {
            cout << x - 1;
        }

        if(i != 5) cout << " ";
    }

    cout << '\n';

    return 0;
}
