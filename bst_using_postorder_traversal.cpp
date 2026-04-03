//Binary Search Tree using Postorder Traversal
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */

class Solution {
    public:
    void postorder(TreeNode* root, vector<int>& result){
        if(root == nullptr) return;
        postorder(root->left, result);
        postorder(root->right, result);
        result.push_back(root->val);
    }

    bool isValidBST(TreeNode* root) {
        vector<int> result;
        postorder(root, result);
        for( int i = 1; i < result.size(); i++){
            if(result[i] >= result[i - 1]) return false;
        }
        return true;
    }
};