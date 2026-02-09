#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

int printInorder(TreeNode* root) {
    if (!root) return 0;
    printInorder(root->left);
    cout << root->val << " ";
    printInorder(root->right);
}

class Solution {
public:
    void inorder(TreeNode* root, vector<int>& vals) {
        if (!root) return;
        inorder(root->left, vals);
        vals.push_back(root->val);
        inorder(root->right, vals);
    }

    TreeNode* buildBST(vector<int>& vals, int l, int r) {
        if (l > r) return nullptr;

        int mid = (l + r) / 2;
        TreeNode* root = new TreeNode(vals[mid]);
        root->left = buildBST(vals, l, mid - 1);
        root->right = buildBST(vals, mid + 1, r);

        return root;
    }

    TreeNode* balanceBST(TreeNode* root) {
        vector<int> vals;
        inorder(root, vals);
        return buildBST(vals, 0, vals.size() - 1);
    }
};
int main() {
    TreeNode* root = new TreeNode(1);
    root->right = new TreeNode(2);
    root->right->right = new TreeNode(3);

    Solution sol;
    TreeNode* balancedRoot = sol.balanceBST(root);
    printInorder(balancedRoot); 

    delete root;
    delete balancedRoot;
    return 0;
}