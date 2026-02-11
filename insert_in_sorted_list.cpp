//GFG Problem: Insert in a Soted List.

/*
structure of the node of the list is as
struct Node
{
    int data;
    struct Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }
};
*/

class Solution {
  public:
    // Should return head of the modified linked list
    Node* sortedInsert(Node* head, int key) {
        // Code here
        Node* dummy = new Node(key);
        
        if(head->data>key){
            dummy->next=head;
            return dummy;
        }
        Node* curr= head;
        while(curr->next && curr->next->data < key){
            curr=curr->next;
        }
        Node* nextNode =curr->next;
        curr->next = dummy;
        dummy->next = nextNode;
        
        return head;
    }
};