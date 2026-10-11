#include <bits/stdc++.h>
using namespace std;

int main()
{
    int m,n;
    cin >> m >> n;
    queue<int> q;
    unordered_set<int> s;
    string s1 = "HIT",s2 = "MISS";
    while(n--) {
        int t;
        cin >> t;
        if(s.find(t) != s.end()) {
            cout << s1 << endl;
            continue;
        }
        if(q.size() < m) {
            q.push(t);
            cout << s2 << endl;
            s.insert(t);
            continue;
        }
        int a = q.front();
        q.pop();
        q.push(t);
        s.erase(a);
        s.insert(t);
        cout << s2 << endl;
    }
}