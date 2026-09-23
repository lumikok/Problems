#include <bits/stdc++.h>
using namespace std;

int erfen(vector<int> &a,int x) {
    int l = 0;
    int r = a.size() - 1;

    while(l <= r) {
        int mid = (r-l) / 2 + l;
        if(a[mid] < x) {
            l = mid + 1;
        } else if(a[mid] > x) {
            r = mid - 1;
        } else {
            return mid;
        }
    }
    return -1;
}