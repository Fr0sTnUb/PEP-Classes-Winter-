//Leetcode Problem 225: Implement Stack using Queues
class myStack{
    public:
    myStack(){

    }
    void push(int x){
        q1.push(x);
    }
    int pop(){
        if(q1.empty()) return -1;
        while(q1.size() > 1){
            q2.push(q1.front());
            q1.pop();
        }
        int top = q1.front();
        q1.pop();
        swap(q1, q2);
        return top;
    }
    int top(){
        if(q1.empty()) return -1;
        while(q1.size() > 1){
            q2.push(q1.front());
            q1.pop();
        }
        int top = q1.front();
        q2.push(top);
        q1.pop();
        swap(q1, q2);
        return top;
    }
    bool empty(){
        return q1.empty();
    }
};

//Using Single queue

class myStack{
    public:
    myStack(){

    }
    void push(int x){
        q.push(x);
        int size = q.size();
        for(int i=0; i<size-1; i++){
            q.push(q.front());
            q.pop();
        }
    }
    int pop(){
        if(q.empty()) return -1;
        int top = q.front();
        q.pop();
        return top;
    }
    int top(){
        if(q.empty()) return -1;
        return q.front();
    }
    bool empty(){
        return q.empty();
    }
};