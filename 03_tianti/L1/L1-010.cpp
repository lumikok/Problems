#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,c;
    cin >> a >> b >> c;
    vector<int> cnt;
    cnt.push_back(a);
    cnt.push_back(b);
    cnt.push_back(c);
    int i = 0;
    sort(cnt.begin(),cnt.end());
    for(int v : cnt) {
        cout << v;
        if(i < 2) {
            cout << "->";
        }
        i++;
    }
    cout << '\n';
    return 0;
}