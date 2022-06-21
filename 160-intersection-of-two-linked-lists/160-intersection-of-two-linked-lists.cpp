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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        
    stack<ListNode*> st,se;
        ListNode* t=NULL;
        while(headA)
        {
            st.push(headA);
            headA=headA->next;
        }
          while(headB)
        {
            se.push(headB);
            headB=headB->next;
        }
        while(!se.empty() and !st.empty() and st.top()==se.top())
        {
            t=st.top();
            st.pop();
            se.pop();
            
        }
        return t;
    }
};