#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    set<int> s;
    while(n--) {
        int op,len;
        cin >> op >> len;
        if(op == 1) {
            if(s.count(len)) cout << "Already Exist\n";
            else s.insert(len);
        } else {
            if(s.empty()) {
                cout << "Empty\n";
                continue;
            } else {
                auto it = s.lower_bound(len);
                int res;

                if(it == s.end()) {
                    it--;
                    res = *it;
                } else if (it == s.begin()) {
                    res = *it;
                } else {
                    auto pre = prev(it);
                    if(len - *pre <= *it - len) {
                        res = *pre;
                    } else {
                        res = *it;
                    }
                }
                cout << res << '\n';
                s.erase(res);
            }
        }
    }
    return 0;
}