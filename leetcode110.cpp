#include <algorithm>
#include <cmath>
#include <iostream>
using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};
class Solution {
public:
   int height(TreeNode* root) {
        if (root== nullptr)
            return 0;

        int leftHeight= height(root->left);
        if(leftHeight== -1) return -1;

        int rightHeight= height(root->right);
        if(rightHeight== -1) return -1;

        if(abs(leftHeight-rightHeight)>1)
            return -1;

        return 1+max(leftHeight, rightHeight);
    }

    bool isBalanced(TreeNode* root) {
        return height(root)!=-1;
    }
};

int main() {
    
    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);

    Solution solution;
    bool balanced = solution.isBalanced(root);
    std::cout << "Is the tree balanced? " << (balanced ? "Yes" : "No") << std::endl;

    delete root->left->left;
    delete root->left->right;
    delete root->left;
    delete root->right;
    delete root;

    return 0;
}