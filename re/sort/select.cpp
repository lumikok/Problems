#include <bits/stdc++.h>
using namespace std;

void selectionSort(vector<int>& a) {
    int j = a.size() - 1;

    for(int i = 0;i < j;i++) {
        int min_index = i;
        for(int h = i+1;h < j+1;h++) {
            if(a[h] < a[min_index]) {
                min_index = h;
                continue;
            }
        }
        if(min_index == i) continue;
        int temp = a[i];
        a[i] = a[min_index];
        a[min_index] = temp;
    }
}