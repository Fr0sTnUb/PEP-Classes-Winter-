//Leetcode Problem 25: Reverse Nodes in k-Group.
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
ListNode* reverseKGroup(ListNode* head, int k) {
    if(head == NULL || k == 1) return head;
    ListNode* dummy = new ListNode(0);
    dummy->next = head;
    ListNode* pre = dummy;
    ListNode* cur = dummy;
    ListNode* nex = dummy;
    int count = 0;
    while(cur->next != NULL){
        cur = cur->next;
        count++;
    }
    while(count >= k){
        cur = pre->next;
        nex = cur->next;
        for(int i=1; i<k; i++){
            cur->next = nex->next;
            nex->next = pre->next;
            pre->next = nex;
            nex = cur->next;
        }
        pre = cur;
        count -= k;
    }
    return dummy->next;
}
};

//Using Recursion
class Solution {
public:
ListNode* reverseKGroup(ListNode* head, int k) {
    ListNode* cur = head;
    int count = 0;
    while(cur != NULL && count != k){
        cur = cur->next;
        count++;
    }
    if(count == k){
        cur = reverseKGroup(cur, k);
        while(count-- > 0){
            ListNode* tmp = head->next;
            head->next = cur;
            cur = head;
            head = tmp;
        }
        head = cur;
    }
    return head;
}
};

//Using Function to reverse the linked list
class Solution {
public:
ListNode* reverseKGroup(ListNode* head, int k) {
    ListNode* cur = head;
    int count = 0;
    while(cur != NULL && count != k){
        cur = cur->next;
        count++;
    }
    if(count == k){
        cur = reverseKGroup(cur, k);
        head = reverse(head, cur);
    }
    return head;
}
private:
ListNode* reverse(ListNode* head, ListNode* tail){
    ListNode* pre = tail;
    ListNode* cur = head;
    while(cur != tail){
        ListNode* nex = cur->next;
        cur->next = pre;
        pre = cur;
        cur = nex;
    }
    return pre;
}
};
