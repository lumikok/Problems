// 洛谷
// DFS
// 第一次：??

#include <bits/stdc++.h>
using namespace std;

int v,g;
int need[1000],feed[1000][1000];
int bestCnt = 15;
vector<int> bestSel;
vector<int> curSel;
int curSum[1000];

bool check() {
    for(int i = 0;i < v;i++) {
        if(curSum[i] < need[i]) return false;
    }
    return true;
}

void dfs(int idx) {
    if(curSel.size() >= bestCnt) return;

    if(idx == g) {
        if(check()) {
            int cnt = curSel.size();
            if(cnt < bestCnt) {
                bestCnt = cnt;
                bestSel = curSel;
            } else if(cnt == bestCnt) {
                if(curSel < bestSel) {  // vector 字典序比较
                    bestSel = curSel; 
                }
            }
        }
        return;
    }

    // 选
    curSel.push_back(idx+1);
    for(int i = 0;i < v;i++) {
        curSum[i] += feed[idx][i];
    }
    dfs(idx+1);

    // 不选
    for(int i = 0;i < v;i++) {
        curSum[i] -= feed[idx][i];
    }
    curSel.pop_back();
    dfs(idx+1);
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    cin >> v;
    for(int i = 0;i < v;i++) {
        cin >> need[i];
    }
    cin >> g;
    for(int i = 0;i < g;i++) {
        for(int j = 0;j < v;j++) {
            cin >> feed[i][j];
        }
    }
    bestCnt = g;
    for(int i = 0;i < g;i++) bestSel.push_back(i+1);
    dfs(0);

    cout << bestCnt << " ";
    for(int i : bestSel) {
        cout << i << " ";
    }
    return 0;
}