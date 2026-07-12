// 洛谷 普及-
// 二分，枚举
// 第一遍：错；
// 找时间重做一下

#include <bits/stdc++.h>
using namespace std;

double a,b,c,d;

double get_ans(double x) {
    return a * x * x * x + b * x * x + c * x + d;
}

int main()
{
    cin >> a >> b >> c >> d;
    int count = 0;
    for(int i = -100;i < 100;i++) {
        double l = i;
        double r = i+1;
        double x1 = get_ans(l);
        double x2 = get_ans(r);
        if(!x1) {
            printf("%.2lf ",l);
            count++;
        }
        if(x1 * x2 < 0) {
            while((r-l) >= 0.001) {
                double mid = (l+r)/2;
                if(get_ans(mid) * get_ans(r) < 0) {
                    l = mid;
                } else {
                    r = mid;
                }
            } 
            printf("%.2lf ",r);
            count++;
        }
        if(count == 3) return 0;
    }
}