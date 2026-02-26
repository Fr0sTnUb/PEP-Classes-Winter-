//GFG Problem: Top View of Binary Tree

/*
class Node {
  public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = nullptr;
        right = nullptr;
    }
};
*/

class Solution {
  public:
    vector<int> topView(Node *root) {
        // code here
        if(!root) return {};
        queue<pair<Node*, int>> q;
        vector<int> ans;
        map<int, int>mp;
        q.push({root, 0});
        while(!q.empty()){
            Node* node = q.front().first;
            int ver = q.front().second;
            q.pop();
            if(node->left) q.push({node->left, ver - 1});
            if(node->right) q.push({node->right, ver + 1});
            if(mp.find(ver) == mp.end()) mp[ver] = node->data;
        }
        for(auto it : mp) ans.push_back(it.second);
        return ans;
    }
};