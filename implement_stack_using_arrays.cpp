//GFG Question: Implement Stack using Arrays

class MyStack {
    public:
    int *arr;
    int top;
    int capacity;

    myStack(int n){
        capacity = n;
        top = -1;
        arr = new int[n];
    }
    bool isEmpty(){
        return top == -1;
    }
    bool isFull(){
        return top == capacity-1;
    }
    void push(int x){
        if(isFull()) return;
        arr[++top] = x;
    }
    void pop(){
        if(isEmpty()) return;
        top--;
    }
    int peek(){
        if(isEmpty()) return -1;
        return arr[top];
    }
}