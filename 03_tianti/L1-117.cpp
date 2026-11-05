#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    int n;
    cin >> n;
    set<ll> a;
    set<ll> praised;
    while(n--) {
        int id;
        ll t;
        cin >> id >> t;
        if(t == 0 && !praised.count(id)) {
            a.insert(id);
        }
        else if(t == 1) {
            a.erase(id);
            praised.insert(id);
        }
    }
    int flag = 1;
    if((int)a.size() == 0) {
        cout << "NONE\n";
    } else {
    for(ll t : a) {
        if(!flag) {
            cout << " ";
        }
        cout << t;
        flag = 0;
    }
    }
    return 0;
    
}