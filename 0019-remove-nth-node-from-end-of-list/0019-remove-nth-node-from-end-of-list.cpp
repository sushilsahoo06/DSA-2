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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int L=0;
        ListNode* temp=head;
        while(temp != nullptr){
            L++;
            temp=temp->next;
        }
        if(L == n){
            ListNode* temp=head->next;
            delete(head);

            return temp;
        }
        int travel_front=L-n;
        ListNode* prev=NULL;
        ListNode* current=head;
        while(travel_front--){
            prev=current;
            current=current->next;
        }
        prev->next = current->next;
        delete(current);
        return  head;
    }
};