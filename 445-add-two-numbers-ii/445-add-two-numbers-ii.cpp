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
        stack<int> s1,s2;
        ListNode* temp=new ListNode();
        ListNode* ptr=temp;
        vector<int> v;
        while(l1 or l2)
        {
            if(l1)
            {
                s1.push(l1->val);
                l1=l1->next;
            }
            if(l2)
            {
                s2.push(l2->val);
                l2=l2->next;
            }
            
        }
        int carry=0;
        while(!s1.empty() or !s2.empty() or carry)
        {
            int sum=0;
             if(!s1.empty())
            {
                sum+=s1.top();
                s1.pop();
            }
             if(!s2.empty())
            {
                sum+=s2.top();
                s2.pop();
            }
            sum+=carry;
            carry=sum/10;
            v.push_back(sum%10);
            
        }
        reverse(v.begin(),v.end());
        int k=0;
        while(k<v.size())
        {
            ListNode* node=new ListNode(v[k]);
            temp->next=node;
            temp=temp->next;
            k++;
        }
        return ptr->next;
    }
};