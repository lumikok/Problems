#include <bits/stdc++.h>
using namespace std;

int lowerbound(vector<int> &a,int x) {

    int l = 0;
    int r = a.size() - 1;

    if(a[r] < x) return a.size();

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

int upperbound(vector<int> &a,int x) {

    int l = 0;
    int r = a.size() - 1;

    if(a[r] <= x) return a.size();

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