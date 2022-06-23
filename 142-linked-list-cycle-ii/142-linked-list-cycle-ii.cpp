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
    ListNode *detectCycle(ListNode *head) {
        ListNode* slow,*fast,*temp;
        int f=0;
        slow=head;
        fast=head;
        temp=head;
        while(fast!=NULL and fast->next!=NULL)
        {
            slow=slow->next;
            fast=fast->next->next;
            if(slow==fast)
            {
                 f=1;
                break;
               
            }
        }
        if(!f) return NULL;
        while(temp!=slow)
        {
            temp=temp->next;
            slow=slow->next;
          
        }
        return slow;
        
    }
};