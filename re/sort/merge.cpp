#include <bits/stdc++.h>
using namespace std;

void mergeRange(vector<int> &a,int l,int mid,int r) {
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

void mergeSort(vector<int>& a, int l, int r) {
    if(l >= r) return;

    int mid = (l + r) / 2;

    mergeSort(a,l,mid);
    mergeSort(a,mid+1,r);

    mergeRange(a,l,mid,r);
}

int main() {
    int a;
    cin >> a;
    vector<int> b(a);
    for(int i = 0;i < a;i++) {
        cin >> b[i];
    }
    mergeSort(b,0,b.size()-1);
    for(int v : b) {
        cout << v << " ";
    }
    return 0;
}