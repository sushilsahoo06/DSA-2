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
    ListNode* findNode(ListNode* temp, int k) {
        int len = 1;
        while (temp) {
            if (len == k) {
                return temp;
            }
            len++;
            temp = temp->next;
        }
        return temp;
    }

    ListNode* rotateRight(ListNode* head, int k) {
        if (!head || !head->next || k == 0) return head;

        ListNode* tail = head;
        int N = 1;
        while (tail->next) {
            N++;
            tail = tail->next;
        }

        k = k % N;
        if (k == 0) return head; 

        // 3. Make the list circular
        tail->next = head;

        ListNode* lastNode = findNode(head, N - k);
        head = lastNode->next;
        lastNode->next = nullptr;

        return head;
    }
};