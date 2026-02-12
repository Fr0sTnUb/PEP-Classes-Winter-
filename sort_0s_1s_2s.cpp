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