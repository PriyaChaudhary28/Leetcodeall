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
    ListNode* middleNode(ListNode* head) {
        if(head->next==NULL) return head;
        ListNode*t=head;
        int c=0;
        while(t->next!=NULL){
           t=t->next;
           c++;}
        c = (c + 1) / 2;
        while(c>0){
        head=head->next;
        c--;}
        return head;
    }
};