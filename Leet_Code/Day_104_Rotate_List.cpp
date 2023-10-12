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
    ListNode* rotateRight(ListNode* head, int k) {
        if(head==nullptr) return head;
        ListNode* t=head;
        ListNode* ans;
        int n=0;
        while(t!=nullptr){
            n++;
            t=t->next;
        }
        k=k%n;
        int i;
        ans=head;
        if(k>0 && n>1){
            t=head;
            for(i=1;i<=n-k-1;i++){
                t=t->next;
            }
            ans=t->next;
            t->next=nullptr;
            t=ans;
            while(t->next!=nullptr){
                t=t->next;
            }
            t->next=head;
        }
        return ans;
    }
};