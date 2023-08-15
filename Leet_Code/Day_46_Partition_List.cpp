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
    ListNode* partition(ListNode* head, int x) {
        ListNode* ans=new ListNode(),*f=new ListNode();
        f=ans;
        ListNode* t=head;
        while(t!=nullptr){
            if((t->val)<x)
            {
                ListNode* n=new ListNode(t->val);
                ans->next=n;
                ans=ans->next;
            }
            t=t->next;
        }
        t=head;
        while(t!=nullptr){
            if(t->val>=x)
            {
                ListNode* n=new ListNode(t->val);
                ans->next=n;
                ans=ans->next;
            }
            t=t->next;
        }
        return f->next;
    }
};