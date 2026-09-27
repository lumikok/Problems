// ¶ÓÁÐÄ£Äâ¡£¸´Ï°
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    queue<int> q;
    while(n--){
        int t;
        cin >> t;
        if(t==1) {
            int x;
            cin >> x;
            q.push(x);
        } else if(t==2) {
            if(!q.empty()) q.pop();
        } else if(t==3) {
            if(!q.empty()) cout << q.front() << endl;
            else cout << -1 << endl;
        } else {
            if(!q.empty()) cout << q.back() << endl;
            else cout << -1 << endl;
        }
    }
    return 0;
}