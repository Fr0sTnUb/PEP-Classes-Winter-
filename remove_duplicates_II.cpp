//Leetcode problem 82: Remove duplicates from sorted linked list II.

class solution {
    public:
    ListNode* deleteDuplicates(ListNode* head){
        if( head == NULL) return head;
        ListNode* dummy = new ListNode(-1);
        dummy->next = head;
        ListNode* prev = dummy;
        ListNode* curr = head;
        while( curr != NULL){
            while( curr->next != NULL && curr->val == curr->next->val){
                curr = curr->next;
            }
            if( prev->next == curr){
                prev = prev->next;
            }
            else{
                prev->next = curr->next;
            }
            curr = curr->next;
        }
        return dummy->next;
    }
};