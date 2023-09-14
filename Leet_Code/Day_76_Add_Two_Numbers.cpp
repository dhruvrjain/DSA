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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int carry=0;
        ListNode* sum=new ListNode();
        ListNode* t=sum;
        t->val=(l1->val + l2->val + carry)%10;
        carry=(l1->val + l2->val + carry)/10;
        l1=l1->next;
        l2=l2->next;
        while(l1!=nullptr && l2!=nullptr){
            t->next=new ListNode();
            t=t->next;
            t->val=(l1->val + l2->val + carry)%10;
            carry=(l1->val + l2->val + carry)/10;
            l1=l1->next;
            l2=l2->next;
        }
        if(l1!=nullptr){
            while(l1!=nullptr){
                t->next=new ListNode();
                t=t->next;
                t->val=(l1->val + carry)%10;
                carry=(l1->val + carry)/10;
                l1=l1->next;
            }
        }
        else{
            while(l2!=nullptr){
                t->next=new ListNode();
                t=t->next;
                t->val=(l2->val + carry)%10;
                carry=(l2->val + carry)/10;
                l2=l2->next;
            }
        }
        if(carry){
            t->next=new ListNode(1);
        }
        return sum;
    }
};