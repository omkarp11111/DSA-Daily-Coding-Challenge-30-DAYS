// You are given a binary tree. A binary tree is considered balanced
//  if the heights of the two subtrees of any node never differ by more than 
//  1. Write a code to determine if a given binary tree is balanced or not.
#include <iostream>
#include <cmath>
using namespace std;


struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution {
public:
    bool isBalanced(TreeNode* root) {
        if (checkHeight(root) == -1) {
            return false;
        }
        return true;
    }

private:
    int checkHeight(TreeNode* node) {
        if (node == NULL) {
            return 0;
        }

        int leftHeight = checkHeight(node->left);
        if (leftHeight == -1) {
            return -1;
        }

        int rightHeight = checkHeight(node->right);
        if (rightHeight == -1) {
            return -1;

        int heightDiff = abs(leftHeight - rightHeight);
        if (heightDiff > 1) {
            return -1;
        }

        return max(leftHeight, rightHeight) + 1;
    }
};

int main() {

    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);

    Solution solution;
    if (solution.isBalanced(root)) {
        cout << "The binary tree is balanced." << endl;
    } else {
        cout << "The binary tree is not balanced." << endl;
    }

    
    return 0;
}
