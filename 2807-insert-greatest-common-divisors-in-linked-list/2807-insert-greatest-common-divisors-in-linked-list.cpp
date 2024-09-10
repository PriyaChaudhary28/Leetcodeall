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
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        if(head==NULL || head->next==NULL) return head;
        ListNode* node1=head;
        ListNode* node2=head->next;
        while(node2!=NULL){
            int gcdvalue=cal(node1->val,node2->val);
            ListNode* gcdn=new ListNode(gcdvalue);
            
            node1->next=gcdn;
            gcdn->next=node2;
            node1=node2;
            node2=node2->next;
        }
        return head;
    }
    private:
    int cal(int a,int b){
        while(b!=0){
           int s=b;
        b=a%b;
        a=s;}
        return a;
}
};