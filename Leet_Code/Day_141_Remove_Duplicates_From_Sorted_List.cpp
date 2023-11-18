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
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* first=head;
        ListNode* second;
        while(first){
            second=first->next;
            while(second && second->val==first->val){
                second=second->next;
            }
            first->next=second;
            first=second;
        }
        return head;
    }
};