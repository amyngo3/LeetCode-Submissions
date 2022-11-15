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
    void deleteNode(ListNode* node) {
        // create new node to point next node in list
        ListNode *nextNode = node->next;
        // copy value of nextNode and point node to next Node after nextNode
        node->val = nextNode->val;
        node->next = nextNode->next;
        // remove nextNode
        nextNode->next = nullptr;
        // delete nextNode
        delete(nextNode);
    }
};