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
    set<ListNode*> s,t;
        ListNode *A,*B;
       
        A=headA;
        B=headB;
        while(A)
        {
            s.insert(A);
            A=A->next;
        }
         while(B)
        {
            t.insert(B);
            B=B->next;
        }
        for(auto x:s)
            if(t.find(x)!=t.end())
                return x;
        return NULL;
    }
};