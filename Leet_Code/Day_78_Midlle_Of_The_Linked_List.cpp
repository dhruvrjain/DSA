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
    ListNode* middleNode(ListNode* head) {
        ListNode* t=head;
        int c=1;
        while(t->next!=nullptr){
            t=t->next;
            c++;
        }
        t=head;
        for(int i=0;i<c/2;i++)
        t=t->next;
        return t;
    }
};