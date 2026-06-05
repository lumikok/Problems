// 洛谷
// 排序，字符串
// 第一次：??；没用排序；

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    string name,a_name;
    int s1,s2,num;
    char x1,x2;
    long long total = 0,t = 0;
    cin >> n;
    while(n--) {
        int n_total = 0;
        cin >> name >> s1 >> s2 >> x1 >> x2 >> num;
        if(s1>80 && num >= 1) n_total += 8000;
        if(s1 > 85 && s2 > 80) n_total += 4000;
        if(s1>90) n_total += 2000;
        if(s1>85 && x2 == 'Y') n_total += 1000;
        if(s2>80 && x1 == 'Y') n_total += 850;
        if(n_total > t) {
            t = n_total;
            a_name = name;
        }
        total += n_total;
    }
    cout << a_name << '\n' << t << '\n' << total << '\n';
    return 0;
}