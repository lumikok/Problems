#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    cin.ignore();
    string s;
    getline(cin,s);
    int l = (s.size() + n - 1) / n;
    char g[n][l];
    int t = 0;
    for(int i = l-1;i >= 0;i--) {
        for(int j = 0;j < n;j++) {
            if(t < s.size()) {
                g[j][i] = s[t];
                t++;
            }
            else g[j][i] = ' ';
        }
    }
    for(int i = 0;i < n;i++) {
        for(int j = 0;j < l;j++) {
            cout << g[i][j];
        }
        cout << '\n';
    }
    return 0;
}