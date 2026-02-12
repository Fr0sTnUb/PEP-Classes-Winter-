//Leetcode Problem 142: Linked List Cycle II.

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */

 ListNode* detectCycle(ListNode *head){
    if(head == NULL || head->next == NULL){
        return NULL;
    }
    
    ListNode* slow = head;
    ListNode* fast = head;
    
    while(slow != NULL && fast != NULL){
        slow = slow->next;
        if(fast->next == NULL){
            return NULL;
        }
        else{
            fast = (fast->next)->next;
        }
        if(slow == fast){
            break;
        }
    }
    
    if(slow == NULL || fast == NULL){
        return NULL;
    }
    
    ListNode* curr = head;
    while(curr != slow){
        curr = curr->next;
        slow = slow->next;
    }
    
    return curr;        
 }