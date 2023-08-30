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
    ListNode* swapPairs(ListNode* head) {
        ListNode* first=head;
        ListNode* ans=head;
        ListNode* second=nullptr;
        ListNode* temp;
        if(head!=nullptr)
        second=head->next;
        if(second!=nullptr)
        ans=second;
        while(second!=nullptr){
            cout<<first->val<<" "<<second->val<<endl;
            first->next=second->next;
            second->next=first;
            temp=first;
            first=first->next;
            if(first==nullptr || first->next==nullptr)
            break;
            second=first->next;
            temp->next=second;
        }
        return ans;
    }
};