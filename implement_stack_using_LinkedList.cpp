//GFG Problem : Implement Stack using Linked List

class myStack{
    public:
    Node* top;
    myStack(){
        top = NULL;
    }
    void push(int x){
        Node* temp = new Node(x);
        temp->next = top;
        top = temp;
    }
    void pop(){
        if(top == NULL) return;
        Node* temp = top;
        top = top->next;
        delete temp;
    }
    bool isEmpty(){
        return top == NULL;
    }
    int peek(){
        if(top == NULL) return -1;
        return top->data;
    }
    int size(){
        int count = 0;
        Node* temp = top;
        while(temp != NULL){
            count++;
            temp = temp->next;
        }
        return count;
    }
}