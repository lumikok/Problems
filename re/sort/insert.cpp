// ≤Â»Î≈≈–Ú
// ∏¥œ∞£∫9-19

#include <bits/stdc++.h>
using namespace std;

void insertionSort(vector<int>& a) {
    for(int i = 1;i < a.size();i++) {
        int base = a[i];
        int j = i - 1;
        while(j >= 0 && a[j] > base) {
            a[j+1] = a[j];
            j--;
        }
        a[j+1] = base;
    }
}