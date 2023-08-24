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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int len=1;
        ListNode* p=head;
        while(p->next!= nullptr){
            p=p->next;
            len++;
        }
        p=head;
        if(len==n){
            head=head->next;
        }
        else{
            len--;
            while(len!=n){
                p=p->next;
                len--;
            }
            p->next=p->next->next;
        }
        return head;
    }
};