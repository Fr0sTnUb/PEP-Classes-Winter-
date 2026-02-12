//GFG Problem: Sort a linked list of 0s, 1s and 2s.

/*
structure of the node of the list is as follows:
struct Node {
    int data;
    Node* next;
    Node(int x) : data(x), next(NULL) {}
};
*/

class Solution {
    public:
    Node* segregate(Node *head){
        if(head == nullptr || head->next == nullptr){
            return head;
        }
        int count[3] = {0, 0, 0};
        Node* curr = head;
        while(curr != nullptr){
            count[curr->data]++;
            curr = curr->next;
        }
        curr = head;
        int i = 0;
        while(curr != nullptr){
            if(count[i] == 0){
                i++;
            }
            else{
                curr->data = i;
                count[i]--;
                curr = curr->next;
            }
        }
        return head;
    }
}

//Different approach: Create three dummy nodes for 0s, 1s and 2s and then link them together.

/*
structure of the node of the list is as follows:
struct Node {
    int data;
    Node* next;
    Node(int x) : data(x), next(NULL) {}
};

class Solution {
    public:
    Node* segregate(Node *head){
        if(head == nullptr || head->next == nullptr){
            return head;
        }
        Node* zeroHead = new Node(0);
        Node* oneHead = new Node(0);
        Node* twoHead = new Node(0);
        
        Node* zeroTail = zeroHead;
        Node* oneTail = oneHead;
        Node* twoTail = twoHead;
        
        Node* curr = head;
        while(curr != nullptr){
            if(curr->data == 0){
                zeroTail->next = curr;
                zeroTail = zeroTail->next;
            }
            else if(curr->data == 1){
                oneTail->next = curr;
                oneTail = oneTail->next;
            }
            else{
                twoTail->next = curr;
                twoTail = twoTail->next;
            }
            curr = curr->next;
        }
        
        zeroTail->next = (oneHead->next) ? (oneHead->next) : (twoHead->next);
        oneTail->next = twoHead->next;
        twoTail->next = nullptr;
        
        return zeroHead->next;        
    }
};
*/