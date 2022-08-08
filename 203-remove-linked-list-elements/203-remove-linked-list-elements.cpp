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
    // val = 2
    // 1->2->3
    ListNode* removeElements(ListNode* head, int val) {
        // base case
        if(head == nullptr)
            return head;
        // recursive call
        ListNode* ptr = head;
        ptr->next = removeElements(ptr->next, val);
        
        // operation
        if(head->val == val){
            ptr = head->next;
            delete head;
            return ptr;
        }
        return head;
    }
};