// 需要重新做
// 模拟
#include <bits/stdc++.h>
using namespace std;

int weight[17] = {
    7, 9, 10, 5, 8, 4, 2, 1, 6,
    3, 7, 9, 10, 5, 8, 4, 2
};
int main()
{
    string s = "All passed";
    string M = "10X98765432";
    bool passed = true;
    int n;
    cin >> n;
    while(n--) {
        string a;
        cin >> a;
        bool valid = true;
        int sum = 0;
        for(int i = 0;i < 17;i++) {
            if(a[i] < '0' || a[i] > '9') {
                valid = false;
                break;
            }
            sum += (a[i] - '0') * weight[i];
        }
        if(!valid) {
            cout << a << '\n';
            passed = false;
            continue;
        }

        int z = sum % 11;

        if(a[17] != M[z]) {
            cout << a << '\n';
            passed = false;
        }
    }
    if(passed) {
        cout << s << '\n';
    }
    return 0;
}