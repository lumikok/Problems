#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const int maxn = 1010;
int a[maxn][maxn];
int b[maxn][maxn];
ll c[maxn][maxn];

int main()
{
    int n,m;
    cin >> n >> m;
    for(int i = 1;i <= n;i++) {
        for(int j = 1;j <= m;j++) {
            cin >> a[i][j];
        }
    }
    char d;
    cin >> d;
    if(d == 'A') {
        cout << n << " " << m << endl;
        for(int i = 1;i <= n;i++) {
            for(int j = 1;j <= m;j++) {
                cout << a[i][j] << " ";
            }
            cout << endl;
        }
    }
    if(d == 'B') {
        cout << n-1 << " " << m-1 << endl;
        for(int i = 1;i <= n-1;i++) {
            for(int j = 1;j <= m-1;j++) {
                cout << a[i][j] * a[i+1][j+1] - a[i][j+1] * a[i+1][j] << " ";
            }
            cout << endl;
        }
    }
    if(d == 'C') {
        for(int i = 1;i <= n-1;i++) {
            for(int j = 1;j <= m-1;j++) {
                b[i][j] = a[i][j] * a[i+1][j+1] - a[i][j+1] * a[i+1][j];
            }
        }
        n = n-2;
        m = m-2;
        cout << n << " " << m << endl;
        for(int i = 1;i <= n;i++) {
            for(int j = 1;j <= m;j++) {
                cout << b[i][j] * b[i+1][j+1] - b[i][j+1] * b[i+1][j] << " ";
            }
            cout << endl;
        }
    }
    if(d == 'D') {
        for(int i = 1;i <= n-1;i++) {
            for(int j = 1;j <= m-1;j++) {
                b[i][j] = a[i][j] * a[i+1][j+1] - a[i][j+1] * a[i+1][j];
            }
        }
        n = n-2;
        m = m-2;
        for(int i = 1;i <= n;i++) {
            for(int j = 1;j <= m;j++) {
                c[i][j] = b[i][j] * b[i+1][j+1] - b[i][j+1] * b[i+1][j];
            }
        }
        n = n-1;
        m = m-1;
        cout << n << " " << m << endl;;
        for(int i = 1;i <= n;i++) {
            for(int j = 1;j <= m;j++) {
                cout << c[i][j] * c[i+1][j+1] - c[i][j+1] * c[i+1][j] << " ";
            }
            cout << endl;
        }
    }
    return 0;
}