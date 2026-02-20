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