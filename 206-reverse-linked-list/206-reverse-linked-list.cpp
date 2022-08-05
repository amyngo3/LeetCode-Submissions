/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    void helperRev(ListNode* &head, ListNode* curr, ListNode* prev){
        // base case
        if(curr == nullptr){
            head = prev;
            return;
        }
        
        ListNode* forward = curr->next;
        // recursive call
        helperRev(head, forward, curr);
        // operation
        curr->next = prev;
    }
    
    ListNode* reverseList(ListNode* head) {
        ListNode* curr = head;
        ListNode* prev = nullptr;
        helperRev(head, curr, prev);
        
        return head;
    }
};