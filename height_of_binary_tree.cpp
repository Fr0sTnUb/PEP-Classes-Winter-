//Leetcode Problem 104: Maximum Depth of Binary Tree
/**
 * Definition for a binary tree node.
 * struct Node {
 *     int data;
 *     Node* left;
 *     Node* right;
 *     Node(int val) : data(val), left(nullptr), right(nullptr) {}
 * };
 */

class Solution {
    public:
    int height(Node* root) {
        if(root == nullptr) return 0;
        int leftHeight = height(root->left);
        int rightHeight = height(root->right);
        return 1 + max(leftHeight, rightHeight);
    }
};

//GFG Problem: Height of Binary Tree
//Using Edges instead of Nodes
class Solution {
    public:
    int height(Node* root) {
        if(root == nullptr) return -1;
        int leftHeight = height(root->left);
        int rightHeight = height(root->right);
        return 1 + max(leftHeight, rightHeight);
    }
};