//Leetcode Problem 222: Count Complete Tree Nodes

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

//Time Complexity: O(log^2(n))
class Solution {
public:
    int countNodes(TreeNode* root) {
        if(root == nullptr) return 0;
        
        int leftHeight = 0, rightHeight = 0;
        TreeNode* leftNode = root;
        TreeNode* rightNode = root;
        
        while(leftNode){
            leftHeight++;
            leftNode = leftNode->left;
        }
        
        while(rightNode){
            rightHeight++;
            rightNode = rightNode->right;
        }
        
        if(leftHeight == rightHeight){
            return pow(2, leftHeight) - 1;
        }
        
        return 1 + countNodes(root->left) + countNodes(root->right);
    }
};

//Using Brute Force Approach
//Time Complexity: O(n)

class Solution {
public:
    int countNodes(TreeNode* root) {
        if(root == nullptr) return 0;
        return 1 + countNodes(root->left) + countNodes(root->right);
    }
};
