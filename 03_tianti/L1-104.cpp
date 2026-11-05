#include <bits/stdc++.h>
using namespace std;

int a[9][9];

int main()
{
    int n;
    cin >> n;
    while(n--) {
        for(int i = 0;i < 9;i++) {
            for(int j = 0;j < 9;j++) {
                cin >> a[i][j];
            }
        }

        int flag = 1;

        for(int i = 0;i < 9;i++) {
            unordered_set<int> s;
            for(int j = 0;j < 9;j++) {
                if(!s.insert(a[i][j]).second || a[i][j] > 9 || a[i][j] < 1) {
                    flag = 0;
                    break;
                }
            }
            if(!flag) break;
        }
        if(!flag) {
            cout << flag << '\n';
            continue;
        }
        for(int i = 0;i < 9;i++) {
            unordered_set<int> s;
            for(int j = 0;j < 9;j++) {
                if(!s.insert(a[j][i]).second) {
                    flag = 0;
                    break;
                }
            }
            if(!flag) break;
        }
        if(!flag) {
            cout << flag << '\n';
            continue;
        }
        for(int block = 0;block < 9;block++) {
            unordered_set<int> s;

            int row = (block / 3) * 3;
            int col = (block % 3) * 3;
            
            for(int i = row;i < row+3;i++) {
                for(int j = col;j < col+3;j++) {
                    if(!s.insert(a[i][j]).second) {
                        flag = 0;
                        break;
                    }
                }
                if(!flag) break;
            }
            if(!flag) break;
        }
        cout << flag << '\n';
    }
    return 0;
}