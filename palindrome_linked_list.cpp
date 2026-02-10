//Leetcode problem 234: Palindrome in linked list.

class solution {
    public:
    bool isPalindrome(ListNode* head){
        ListNode* slow = head;
        ListNode* fast = head;
        while( fast != NULL && fast->next != NULL){
            slow = slow->next;
            fast = fast->next->next;
        }
        ListNode* prev = NULL;
        while( slow != NULL){
            ListNode* next = slow->next;
            slow->next = prev;
            prev = slow;
            slow = next;
        }
        ListNode* left = head;
        ListNode* right = prev;
        while( right != NULL){
            if( left->val != right->val) return false;
            left = left->next;
            right = right->next;
        }

        return true;

    }
};

//Using making a new linked list and comparing the two linked lists.

/*
class solution {
    public:
    bool isPalindrome(ListNode* head){
        ListNode* newHead = NULL;
        ListNode* temp = head;
        while( temp != NULL){
            ListNode* newNode = new ListNode(temp->val);
            newNode->next = newHead;
            newHead = newNode;
            temp = temp->next;
        }
        ListNode* left = head;
        ListNode* right = newHead;
        while( right != NULL){
            if( left->val != right->val) return false;
            left = left->next;
            right = right->next;
        }

        return true;

    }
};
*/