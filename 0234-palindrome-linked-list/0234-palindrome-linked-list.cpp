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
    bool isPalindrome(ListNode* head) {
        ListNode*slow=head;
        ListNode*fast= head;

        while(fast && fast->next){
            slow=slow->next;
            fast=fast->next->next;
        }
        ListNode* prev=NULL;
        ListNode* current=slow;
        while(current != NULL){
            ListNode* nxt=current->next;
            current->next=prev;
            prev=current;
            current=nxt;
        }
        ListNode* firstHalf=head;
        ListNode* secondHalf=prev;

        while( secondHalf != NULL){
            if(firstHalf->val != secondHalf->val) return false;

            firstHalf=firstHalf->next;
            secondHalf=secondHalf->next;
        }
        return true;
    }
};