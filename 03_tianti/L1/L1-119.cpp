// 需要重新做
// max_element,min_element
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> a(n);

    long long sum = 0;

    for(int i = 0; i < n; i++) {
        cin >> a[i];
        sum += a[i];
    }

    int mx = *max_element(a.begin(), a.end());
    int mn = *min_element(a.begin(), a.end());

    long long average = sum / n;

    cout << mx << " " << mn << " " << average << '\n';

    int flag = 1;

    for(int i = 0; i < n; i++) {
        if(a[i] <= average * 2) {
            continue;
        }

        if(!flag) {
            cout << " ";
        }

        cout << i + 1;
        flag = 0;
    }

    if(flag) {
        cout << "Normal";
    }

    cout << '\n';

    return 0;
}
