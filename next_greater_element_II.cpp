//Leetcode Problem 503: Next Greater Element II
//Time Complexity: O(n)

class Solution{
    public:
    vector<int> nextGreaterElements(vector<int>& nums){
        int n = nums.size();
        vector<int> ans(n, -1);
        stack<int> st;
        for(int i=0; i<2*n; i++){
            while(!st.empty() && nums[st.top()] < nums[i%n]){
                ans[st.top()] = nums[i%n];
                st.pop();
            }
            st.push(i%n);
        }
        return ans;
    }
};

//Using Different Approach

class Solution{
    public:
    vector<int> nextGreaterElements(vector<int>& nums){
        int n = nums.size();
        vector<int> ans(n, -1);
        stack<int> st;
        for(int i=0; i<n; i++){
            while(!st.empty() && nums[st.top()] < nums[i]){
                ans[st.top()] = nums[i];
                st.pop();
            }
            st.push(i);
        }
        for(int i=0; i<n; i++){
            while(!st.empty() && nums[st.top()] < nums[i]){
                ans[st.top()] = nums[i];
                st.pop();
            }
        }
        return ans;
    }
};

//Using different approach

class Solution{
    public:
    vector<int> nextGreaterElements(vector<int>& nums){
        int n = nums.size();
        stack<int> st;

        for(int i = n - 2; i >= 0; i--) st.push(nums[i]);

        vector<int> ans(n);

        for(int i = n - 1; i >= 0; i--){
            while(!st.empty() && st.top() <= nums[i]) st.pop();
            ans[i] = st.empty() ? -1 : st.top();
            st.push(nums[i]);
        }
        return ans;
    }
}