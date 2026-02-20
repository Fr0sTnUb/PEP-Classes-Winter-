//Leetcode problem 496: Next Greater Element I
//Time Complexity: O(n)

class Solution {
    public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2){
        stack<int> st;
        unordered_map<int, int> mp;
        for(int i=0; i<nums2.size(); i++){
            while(!st.empty() && st.top() < nums2[i]){
                mp[st.top()] = nums2[i];
                st.pop();
            }
            st.push(nums2[i]);
        }
        vector<int> ans;
        for(int i=0; i<nums1.size(); i++){
            if(mp.find(nums1[i]) != mp.end()){
                ans.push_back(mp[nums1[i]]);
            }
            else{
                ans.push_back(-1);
            }
        }
        return ans;
    }
};

//Using different approach

class Solution {
    public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2){
        int n = nums2.size();
        vector<int> ans(n, -1);
        stack<int> st;
        for(int i=0; i<n; i++){
            while(!st.empty() && nums2[st.top()] < nums2[i]){
                ans[st.top()] = nums2[i];
                st.pop();
            }
            st.push(i);
        }
        vector<int> res;
        for(int i=0; i<nums1.size(); i++){
            int idx = find(nums2.begin(), nums2.end(), nums1[i]) - nums2.begin();
            res.push_back(ans[idx]);
        }
        return res;
    }
};

//Using single array. GFG Problem: Next Greater Element

class Solution{
    public:
    vector<int> nextGreaterElement(vector<int>& arr){
        int n = arr.size();
        vector<int> ans(n, -1);
        stack<int> st;
        for(int i=0; i<n; i++){
            while(!st.empty() && arr[st.top()] < arr[i]){
                ans[st.top()] = arr[i];
                st.pop();
            }
            st.push(i);
        }
        return ans;
    }
};

