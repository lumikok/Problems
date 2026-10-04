#include <bits/stdc++.h>
using namespace std;

int main() {
    unordered_set<int> s;

    int n;
    cin >> n;
    while(n--) {
        int op,x;
        cin >> op >> x;
        if(op==1) s.insert(x);
        else if(op==2) s.erase(x);
        else cout << (s.count(x) ? "YES\n" : "NO\n");
    }
}