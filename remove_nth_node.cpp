//Leetcode question 19: Remove Nth Node From End of List.

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */

class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(head == NULL || n <= 0){
            return head;
        }
        
        ListNode* dummy = new ListNode(0);
        dummy->next = head;
        
        ListNode* slow = dummy;
        ListNode* fast = dummy;
        
        for(int i = 0; i < n; i++){
            fast = fast->next;
        }
        
        while(fast->next != NULL){
            slow = slow->next;
            fast = fast->next;
        }
        
        ListNode* nodeToDelete = slow->next;
        slow->next = nodeToDelete->next;
        
        delete nodeToDelete;
        
        return dummy->next;
    }
};