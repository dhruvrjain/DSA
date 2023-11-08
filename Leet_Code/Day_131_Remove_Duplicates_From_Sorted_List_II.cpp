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
        ListNode* t1;
        ListNode* t2;
        ListNode* chead;
        ListNode* ans;
        while(true){
            if(!head || head->next==nullptr) break;
            t1=head;
            if(t1->val==t1->next->val){
                t2=t1->next;
                while(t2->next!=nullptr && t2->next->val==t2->val){
                    t2=t2->next;
                }
                head=t2->next;
            }
            else{
                chead=t1;
                break;
            }
        }
        ans=chead=head;
        while(true){
            if(!head || head->next==nullptr) break;
            t1=head;
            if(t1->val==t1->next->val){
                t2=t1->next;
                while(t2->next!=nullptr && t2->next->val==t2->val){
                    t2=t2->next;
                }
                chead->next=head=t2->next;
                if(!head || head->next==nullptr) break;
            }
            else{
                chead=head;
                head=head->next;
            }
        }  
        return ans;
    }
};