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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        ListNode* merging = new ListNode; // сurrent element in result list
        int tmp; 
        ListNode* head = merging; // pointer to head of result list.
        // At start we have 0-value 
        // Ex: We add 2,3,4,5 into result list
        // We get result list: 0,2,3,4,5
        // It's explain why we return head->next (on line 47)
        
        while (!(l1 == nullptr && l2 == nullptr)){  
            
            merging->next = new ListNode;
            merging = merging->next;
            
            if (l1 != nullptr && l2 != nullptr)
                if (l1->val <= l2->val){
                    tmp = l1->val;
                    l1 = l1->next;
                } else {
                    tmp = l2->val;
                    l2 = l2->next;
                }
            else if (l1 != nullptr && l2 == nullptr){
                tmp = l1->val;
                l1 = l1->next;
            } else if (l1 == nullptr && l2 != nullptr){
                tmp = l2->val;
                l2 = l2->next;
            }
            
            merging->val = tmp;
        }
        
        return head->next;
    }
};
