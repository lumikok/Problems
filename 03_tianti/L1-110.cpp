
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    vector<int> a(n);

    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int xpmclzjkln = 0;

    while(m--) {
        int op;
        cin >> op;

        if(op == 1) {
            int l1, l2;
            cin >> l1;

            vector<int> b(l1);
            for(int &x : b) cin >> x;

            cin >> l2;

            vector<int> c(l2);
            for(int &x : c) cin >> x;

            auto it = search(a.begin(), a.end(),
                             b.begin(), b.end());

            if(it != a.end()) {
                xpmclzjkln = it - a.begin();

                a.erase(a.begin() + xpmclzjkln,
                        a.begin() + xpmclzjkln + l1);

                a.insert(a.begin() + xpmclzjkln,
                         c.begin(), c.end());
            }
        }

        else if(op == 2) {
            vector<int> b;

            for(int i = 0; i < (int)a.size(); i++) {
                b.push_back(a[i]);

                if(i + 1 < (int)a.size() &&
                   (a[i] + a[i+1]) % 2 == 0) {
                    b.push_back((a[i] + a[i+1]) / 2);
                }
            }

            a = move(b);
        }

        else if(op == 3) {
            int l, r;
            cin >> l >> r;

            reverse(a.begin() + l - 1,
                    a.begin() + r);
        }
    }

    for(int i = 0; i < (int)a.size(); i++) {
        if(i > 0) cout << " ";
        cout << a[i];
    }

    cout << '\n';

    return 0;
}
