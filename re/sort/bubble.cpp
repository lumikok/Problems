#include <bits/stdc++.h>
using namespace std;

void bubble(vector<int>& a) {
    int size = a.size();
    for(int i = size-1;i > 0;i--) {
        int swapped = 0;
        for(int j = 0;j < i;j++) {
            if(a[j] > a[j+1]) {
                int temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
                swapped = 1;
            }
        }
        if(swapped == 0) break;
    }
}