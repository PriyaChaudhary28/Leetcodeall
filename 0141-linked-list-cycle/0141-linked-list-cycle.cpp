/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution1 {
public:
    bool hasCycle(ListNode *head) {
        ListNode* slow = head;
        ListNode* fast = head;
        while(fast && fast -> next) {
            slow = slow -> next;
            fast = fast -> next -> next;

            if(slow == fast) {
                return true;
            }
        }
        return false;
    }
};

class Solution {
public:
    bool hasCycle(ListNode *head) {
        map<ListNode*, int> mp;
        ListNode* temp = head;
        while(temp) {
            mp[temp]++;
            if(mp[temp] == 2) {
                return true;
            }
            temp = temp -> next;
        }
        return false;
    }
};