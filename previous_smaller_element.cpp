//GFG Problem: Previous Smaller Element

class Solution{
    public:
    vector<int> prevSmaller(vector<int> &arr){
        int n = arr.size();
        vector<int> ans(n, -1);
        stack<int> st;
        for(int i=0; i<n; i++){
            while(!st.empty() && arr[st.top()] >= arr[i]){
                st.pop();
            }
            if(!st.empty()){
                ans[i] = arr[st.top()];
            }
            st.push(i);
        }
        return ans;
    }
};