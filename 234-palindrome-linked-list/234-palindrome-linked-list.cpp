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
    bool isPalindrome(ListNode* head) {
        if(head->next==NULL)
            return true;
    ListNode* slow=head;
    ListNode* fast=head;
        while(fast!=NULL and fast->next!=NULL)
        {
            slow=slow->next;
            fast=fast->next->next;
        }
        if(fast!=NULL)
            slow=slow->next;
        ListNode* prev,*curr,*nxt;
        prev=0;
        curr=slow;
        nxt=slow;
        while(nxt)
        {
          
            
            nxt=nxt->next;
            curr->next=prev;
            prev=curr;
            curr=nxt;
            
           
        }
        while(prev!=NULL)
        {
            if(prev->val!=head->val)
                return false;
            prev=prev->next;
            head=head->next;
        }
        
        
        return true;
        
        
    }};