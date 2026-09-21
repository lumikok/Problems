#include <bits/stdc++.h>
using namespace std;

void quickSort(vector<int>& a,int l,int r) {
    if(l >= r) return;
    int i = l;
    int j = r;
    while(i < j) {
        while(i < j && a[j] >= a[l]) {
            j--;
        }
        while(i < j && a[i] <= a[l]) {
            i++;
        }
        int temp = a[i];
        a[i] = a[j];
        a[j] = temp;
    }
    int tem = a[l];
    a[l] = a[i];
    a[i] = tem;

    int pivot = i;
    quickSort(a,l,pivot-1);
    quickSort(a,pivot+1,r);
}