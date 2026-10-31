// 20min
// 自定义堆排序
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

typedef struct Node {
    ll sum;
    int i;
    int j;
} Node;
// 结构体比较器
struct cmp {
    bool operator()(const Node &a,const Node &b) {
        return a.sum > b.sum;                         // 反直觉的
    }
};

int main()
{
    int n;
    cin >> n;
    vector<ll> a(n+1);
    vector<ll> b(n+1);
    
    for(int i = 1;i <= n;i++) {
        cin >> a[i];
    }
    for(int i = 1;i <= n;i++) {
        cin >> b[i];
    }
    priority_queue<Node,vector<Node>,cmp> pq;
    for(int i = 1;i <= n;i++) {
        pq.push({a[i] + b[1], i, 1});
    }
    for(int cnt = 0;cnt < n;cnt++) {
        Node cur = pq.top();
        pq.pop();

        cout << cur.sum << " ";
        int i = cur.i;
        int j = cur.j;
        if(j+1 <= n) {
            pq.push({a[i] + b[j+1], i, j+1});
        }
    }
    return 0;
}