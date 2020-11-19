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
    bool hasCycle(ListNode *head) {
        unordered_set<ListNode*> storage;
        while (storage.find(head) == storage.end() && head){
            storage.insert(head);
            head = head->next;
        }
        return !head ? false : true;
    }
};
