#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,r;
    cin >> n >> r;
    vector<vector<string>> a(n,vector<string>(n));
    for(int i = 0;i < n;i++) {
        for(int j = 0;j < n;j++) {
            a[i][j] = ".";
        }
    }
    int b = (n+1)/2;
    for(int i = 1;i <= n;i++) {
        for(int j = 1;j <= n;j++) {
            if((i-b)*(i-b) + (j-b)*(j-b) <= r*r) {
                a[i-1][j-1] = "#";
            }
        }
    }
    for(int i = 0;i < n;i++) {
        for(int j = 0;j < n;j++) {
            cout << a[i][j];
        }
        cout << endl;
    }
}