/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
 
 // I think that this code can be optimizate, cause runtime is not the best
 // And memory usage so huge
 
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int a, b, sum;
        bool r = false;
        ListNode* result = new ListNode;
        ListNode* current = result;
        while (l1 != nullptr || l2 != nullptr){
            if (l1 != nullptr){
                a = l1->val;
                l1 = l1->next;
            } else a = 0;
            if (l2 != nullptr){
                b = l2->val;
                l2 = l2->next;
            } else b = 0;
            
            if (r) a++;
            
            if (a+b < 10) {
                if (r) r = false;
                
                sum = a + b;

                current->next = new ListNode(sum);
                current = current->next;
            }
            else{
                sum = (a+b) % 10;
                
                current->next = new ListNode(sum);
                current = current->next;
                r = true;
            }
        }
        if (r){
            current->next = new ListNode(1);
            current = current->next;
        }
        return result->next;
    }
    
};
