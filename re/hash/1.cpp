#include <bits/stdc++.h>
using namespace std;

int main() {
    unordered_set<int> s;

    int n;
    cin >> n;
    while(n--) {
        int x;
        cin >> x;
        if(s.count(x)) cout << "YES\n";
        else {
            cout << "NO\n";
            s.insert(x);
        }
    }
}