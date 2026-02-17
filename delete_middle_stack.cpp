//GFG Problem: Delete the middle element of a stack.

class solution{
    public:
    void deleteMid(stack<int> &s){
        int n = s.size();
        if(s.empty()) return;
        int mid = n/2;
        deleteMiddle(s, mid);
    }
    void deleteMiddle(stack<int> &s, int mid){
        if(mid == 0){
            s.pop();
            return;
        }
        int temp = s.top();
        s.pop();
        deleteMiddle(s, mid-1);
        s.push(temp);
    }
};