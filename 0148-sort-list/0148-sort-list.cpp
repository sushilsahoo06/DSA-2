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
    ListNode* mergeSort(ListNode* pos1 ,ListNode* pos2){
        ListNode* dummyNode=new ListNode(0);
        ListNode* prev=dummyNode;
        while(pos1 && pos2){
            if(pos1->val <= pos2->val){
                prev->next=pos1;
                pos1=pos1->next;
            }else{
                prev->next=pos2;
                pos2=pos2->next;
            }
            prev=prev->next;
        }
        if(pos1) prev->next=pos1;
        if(pos2) prev->next=pos2;
        return dummyNode->next;
    }
    ListNode* sortList(ListNode* head) {
        if(head == nullptr || head->next == nullptr) return head;
        ListNode* slow=head;
        ListNode* fast=head->next;
        while(fast && fast->next){
            slow=slow->next;
            fast=fast->next->next;
        }
        ListNode* rightHalf=slow->next;
        slow->next=NULL;

        ListNode* sortedLeft=sortList(head);
        ListNode* sortedRight=sortList(rightHalf);

        return mergeSort(sortedLeft,sortedRight);
    }
};