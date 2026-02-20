//GFG Problem: Queue Reversal
class Solution{
    public:
    void rev(queue<int> &q){
        if(q.empty()) return;
        int temp = q.front();
        q.pop();
        rev(q);
        q.push(temp);
    }
};


//Reversing K elements of a queue
class Solution{
    public:
    void rev(queue<int> &q, int k){
        if(q.empty() || k <= 0) return;
        stack<int> st;
        
        for(int i=0; i<k && !q.empty(); i++){
            st.push(q.front());
            q.pop();
        }
        
        while(!st.empty()){
            q.push(st.top());
            st.pop();
        }
        
        int size = q.size() - k;
        for(int i=0; i<size; i++){
            q.push(q.front());
            q.pop();
        }
    }   
};