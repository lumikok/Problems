#include <bits/stdc++.h>
using namespace std;

int lowerbound(const vector<int> &a,int x) {

    int l = 0;
    int r = static_cast<int>(a.size()) - 1;

    while(l <= r) {
        int mid = (r - l) / 2 + l;
        if(a[mid] < x) {
            l = mid + 1;
        } else {
            r = mid - 1;
        }
    }
    return l;
}

int upperbound(const vector<int> &a,int x) {

    int l = 0;
    int r = static_cast<int>(a.size()) - 1;

    while(l <= r) {
        int mid = (r-l) / 2 + l;
        if(a[mid] <= x) {
            l = mid + 1;
        } else {
            r = mid - 1;
        }
    }
    return l;
}