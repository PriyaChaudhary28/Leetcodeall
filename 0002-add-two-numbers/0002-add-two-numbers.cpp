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
    ListNode* add(ListNode* l1, ListNode* l2, int c){
        if (!l1 && !l2  && c == 0) {
            return nullptr;
        }
        int v=l1?l1->val:0;
        int s=l2?l2->val:0;
        int sum=v+s+c;
        c=sum/10;
        ListNode* newn=new ListNode(sum%10);
        newn->next=add(l1 ? l1->next : nullptr,
                                            l2 ? l2->next : nullptr,c);
        return newn;
    }
        
        
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        return add(l1, l2, 0);
    }
};