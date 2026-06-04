#include <iostream>
using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

void dfs(TreeNode *node) {
    if(node == nullptr) return;

    cout << node->val << endl;

    dfs(node->left);

    dfs(node->right);
}

int main() {
    TreeNode *root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);

    dfs(root); // 输出 1 2 3
    return 0;
}