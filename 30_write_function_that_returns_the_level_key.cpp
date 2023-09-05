// Given a Binary Tree and a key, 
// write a function that returns the level of the key.
#include <iostream>
#include <queue>
using namespace std;


struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

int findLevel(TreeNode* root, int key) {
    if (root == NULL) {
        return -1; 
    }

    queue<TreeNode*> q;
    q.push(root);
    int level = 0;

    while (!q.empty()) {
        int levelSize = q.size();

        for (int i = 0; i < levelSize; i++) {
            TreeNode* node = q.front();
            q.pop();

            if (node->val == key) {
                return level; 
            }

            if (node->left) {
                q.push(node->left);
            }

            if (node->right) {
                q.push(node->right);
            }
        }

        level++;
    }

    return -1; 
}

int main() {
  
    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);
    root->right->right = new TreeNode(6);

    int key = 5;
    int level = findLevel(root, key);

    if (level != -1) {
        cout << "The level of key " << key << " is: " << level << endl;
    } else {
        cout << "Key " << key << " not found in the tree." << endl;
    }

   

    return 0;
}
