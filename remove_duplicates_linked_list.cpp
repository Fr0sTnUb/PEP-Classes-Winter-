//Leetcode problem 83: Remove duplicates from sorted linked list.

class solution {
    public:
    ListNode* deleteDuplicates(ListNode* head){
        if( head == NULL) return head;
        ListNode* temp = head;
        while( temp->next != NULL){
            if( temp->val == temp->next->val){
                temp->next = temp->next->next;
            }
            else{
                temp = temp->next;
            }
        }
        return head;
    }
};