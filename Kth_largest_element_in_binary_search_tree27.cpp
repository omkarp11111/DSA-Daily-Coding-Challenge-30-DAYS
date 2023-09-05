//  Given a binary search tree, 
// task is to find Kth largest element in the binary search tree.
#include <iostream>
using namespace std;


struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution {
public:
    int kthLargest(TreeNode* root, int k) {
        count = k;
        traverse(root);
        return result;
    }

private:
    int count;
    int result;

    void traverse(TreeNode* node) {
        if (node == NULL || count <= 0) {
            return;
        }


        traverse(node->right);

    
        count--;
        if (count == 0) {
            result = node->val;
            return;
        }

        traverse(node->left);
    }
};

int main() {
    
    TreeNode* root = new TreeNode(4);
    root->left = new TreeNode(2);
    root->right = new TreeNode(6);
    root->left->left = new TreeNode(1);
    root->left->right = new TreeNode(3);
    root->right->left = new TreeNode(5);
    root->right->right = new TreeNode(7);

    Solution solution;
    int k = 3;
    int kthLargestElement = solution.kthLargest(root, k);

    cout << "The " << k << "th largest element is: " << kthLargestElement << endl;

  

    return 0;
}
