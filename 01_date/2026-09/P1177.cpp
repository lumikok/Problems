// Ä£°æ ÅÅÐò
// 9-19

#include <bits/stdc++.h>
using namespace std;

void mergeRange(vector<int>& a,int l,int mid,int r) {
    int i = l;
    int j = mid + 1;

    vector<int> temp;
    while(i <= mid && j <= r) {
        if(a[i] > a[j]) {
            temp.push_back(a[j]);
            j++;
        } else {
            temp.push_back(a[i]);
            i++;
        }
    }
    while(i <= mid) {
        temp.push_back(a[i]);
        i++;
    }
    while(j <= r) {
        temp.push_back(a[j]);
        j++;
    }
    int h = l;
    for(int v : temp) {
        a[h] = v;
        h++;
    }
}

void mergeSort(vector<int>& a,int l,int r) {
    if(l >= r) return;
    int mid = (l + r) / 2;

    mergeSort(a,l,mid);
    mergeSort(a,mid+1,r);

    mergeRange(a,l,mid,r);
}

int main() {
    int n;
    cin >> n;
    vector<int> a(n);

    for(int i = 0;i < n;i++) {
        cin >> a[i];
    }

    mergeSort(a,0,a.size()-1);
    for(int v : a) {
        cout << v << " ";
    }
    return 0;
}