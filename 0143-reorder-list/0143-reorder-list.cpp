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
    ListNode* mid(ListNode* head) {
        ListNode* slow = head;
        ListNode* fast = head;
        while (fast != NULL && fast->next != NULL) {
            slow = slow->next;
            fast = fast->next->next;
        }
        return slow;
    }

    void reorderList(ListNode* head) {
        if (!head || !head->next || !head->next->next) return;

        ListNode* midNode = mid(head);
        ListNode* secondHalf = midNode->next;
        midNode->next = NULL;

        ListNode* prev = NULL;
        ListNode* curr = secondHalf;
        while (curr) {
            ListNode* nextNode = curr->next;
            curr->next = prev;
            prev = curr;
            curr = nextNode;
        }
        ListNode* secondHalfReversed = prev;

        ListNode* firstHalf = head;
        while (secondHalfReversed) {
            ListNode* temp1 = firstHalf->next;
            ListNode* temp2 = secondHalfReversed->next;

            firstHalf->next = secondHalfReversed;
            secondHalfReversed->next = temp1;

            firstHalf = temp1;
            secondHalfReversed = temp2;
        }
    }
};
