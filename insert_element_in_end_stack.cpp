//GFG Problem Statement: Insert an element at the end of a stack.

class Solution{
    public:
    stack<int> insertAtBottom(stack<int> &s, int x){
        if(s.empty()){
            s.push(x);
            return s;
        }
        int temp = s.top();
        s.pop();
        insertAtBottom(s, x);
        s.push(temp);
        return s;
    }

}