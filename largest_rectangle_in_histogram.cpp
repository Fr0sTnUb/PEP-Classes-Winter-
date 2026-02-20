//Leetcode Problem 84: Largest Rectangle in Histogram

class Solution {
public:
    int largestRectangleArea(vector<int>& heights){
        int n = heights.size();
        vector<int> nextSmaller(n, n);
        vector<int> prevSmaller(n, -1);
        stack<int> st;
        
        for(int i=0; i<n; i++){
            while(!st.empty() && heights[st.top()] >= heights[i]){
                st.pop();
            }
            if(!st.empty()){
                prevSmaller[i] = st.top();
            }
            st.push(i);
        }
        
        while(!st.empty()) st.pop();
        
        for(int i=n-1; i>=0; i--){
            while(!st.empty() && heights[st.top()] >= heights[i]){
                st.pop();
            }
            if(!st.empty()){
                nextSmaller[i] = st.top();
            }
            st.push(i);
        }
        
        int maxArea = 0;
        for(int i=0; i<n; i++){
            int width = nextSmaller[i] - prevSmaller[i] - 1;
            int area = width * heights[i];
            maxArea = max(maxArea, area);
        }
        
        return maxArea;
    }
};

//Using single traversal
class Solution {
public:
    int largestRectangleArea(vector<int>& heights){
        int n = heights.size();
        stack<int> st;
        int maxArea = 0;
        
        for(int i=0; i<=n; i++){
            while(!st.empty() && (i == n || heights[st.top()] >= heights[i])){
                int height = heights[st.top()];
                st.pop();
                int width = st.empty() ? i : i - st.top() - 1;
                maxArea = max(maxArea, height * width);
            }
            st.push(i);
        }
        
        return maxArea;
    }
};