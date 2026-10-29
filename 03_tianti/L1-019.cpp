#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,n;
    cin >> a >> b >> n;
    vector<int> han;
    vector<int> a_hua;
    vector<int> b_hua;
    for(int i = 0;i < n;i++) {
        int c,d,e,f;
        cin >> c >> d >> e >> f;
        han.push_back(c+e);
        a_hua.push_back(d);
        b_hua.push_back(f);
    }
    int cnt_a = 0;
    int cnt_b = 0;
    for(int i = 0;i < n;i++) {
        if(han[i] == a_hua[i] && han[i] != b_hua[i]) {
            cnt_a++;
            a--;
        }
        if(han[i] == b_hua[i] && han[i] != a_hua[i]) {
            cnt_b++;
            b--;
        }
        if(a < 0) {
            cout << "A\n";
            cout << cnt_b;
            break;
        } 
        if(b < 0) {
            cout << "B\n";
            cout << cnt_a;
            break;
        }
    }
    return 0;
}