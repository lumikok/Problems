#include <iostream>
#include <queue>
using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x): val(x),left(nullptr),right(nullptr) {}
};

void bfs(TreeNode *root) {
    if (root == nullptr) return;
    queue<TreeNode*> q;   // 定义节点指针类型的队列
    q.push(root);
    while(!q.empty()) {
        TreeNode* node = q.front();
        q.pop();
        cout << node->val << " ";  //访问当前节点
        // 在处理当前节点的同时，将下一层的节点按顺序入队
        if(node->left) q.push(node->left);
        if(node->right) q.push(node->right);
    }
}
