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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        if (head == nullptr || left == right) return head;

        ListNode dummy(0); // Create a dummy node
        dummy.next = head;

        ListNode* beforeRev = &dummy;

        // Move beforeRev to the node before the reversal starts
        for (int i = 1; i < left; ++i) {
            beforeRev = beforeRev->next;
        }

        // Reverse the sublist
        ListNode* revStart = beforeRev->next;
        ListNode* movingNode = revStart->next;

        for (int i = 0; i < right - left; ++i) {
            revStart->next = movingNode->next;
            movingNode->next = beforeRev->next;
            beforeRev->next = movingNode;
            movingNode = revStart->next;
        }

        return dummy.next;
    }
};
