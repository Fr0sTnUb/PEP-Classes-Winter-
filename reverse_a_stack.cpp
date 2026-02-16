//GFG Problem: Reverse a stack.
class Solution{
    public:
     stack<int> reverseStack(stack<int> &s){
        if(s.empty()) return s;
        int temp = s.top();
        s.pop();
        reverseStack(s);
        insertAtBottom(s, temp);
        return s;
    }
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