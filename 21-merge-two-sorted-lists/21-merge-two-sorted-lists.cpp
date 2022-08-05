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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* result = nullptr;
        
        // list1 is empty
        if(list1 == nullptr)
            return list2;
        // list2 is empty
        else if(list2 == nullptr)
            return list1;
        // if list1 <= list2
        if(list1->val <= list2->val){
            result = list1;
            result->next = mergeTwoLists(list1->next, list2);
        }
        // if list1 >= list2
        else if(list1->val >= list2->val){
            result = list2;
            result->next = mergeTwoLists(list1, list2->next);
        }
        return result;
    }
};