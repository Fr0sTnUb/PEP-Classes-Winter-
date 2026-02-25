//GFG Problem: Boundary Traversal of binary tree

/*
class Node {
  public:
    int data;
    Node* left;
    Node* right;

    // Constructor to initialize a new node
    Node(int val) {
        data = val;
        left = NULL;
        right = NULL;
    }
};
*/

class Solution {
  public:
  bool isLeaf(Node* node){
      return node->left == nullptr && node->right == nullptr;
    }
    void ToCountLeft(Node* root, vector<int>& res){
        if(!root || isLeaf(root)) return;
        res.push_back(root->data);
        if(root->left){
            ToCountLeft(root->left, res);
        }
        else if(root->right){
            ToCountLeft(root->right, res);
        }
    }
    void ToCountLeaf(Node* root, vector<int>& res){
        if(!root) return;
        if(isLeaf(root)) {
            res.push_back(root->data);
            return;
        }
        ToCountLeaf(root->left, res);
        ToCountLeaf(root->right, res);
    }
    void ToCountRight(Node* root, vector<int>& res){
        if(!root || isLeaf(root)) return;
        if(root->right){
            ToCountRight(root->right, res);
        }
        else if(root->left){
            ToCountRight(root->left, res);
        }
        res.push_back(root->data);
    }
    
    vector<int> boundaryTraversal(Node *root) {
        // code here
        vector<int> res;
        if(!root) return res;
        if(!isLeaf(root)) res.push_back(root->data);
        ToCountLeft(root->left, res);
        ToCountLeaf(root, res);
        ToCountRight(root->right, res);
    }
};