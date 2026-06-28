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
    ListNode* reverse(ListNode* head){
        ListNode* prev=NULL;
        ListNode* current=head;
        ListNode* nxt=NULL;
        while(current != nullptr){
            nxt=current->next;
            current->next=prev;
            prev=current;
            current=nxt;
        }
        return prev;
    }
    ListNode* findKthposition(ListNode* temp , int k){
        k-=1;
        while(temp != NULL && k>0){
            k--;
            temp=temp->next;
        }
        return temp;
    }
    ListNode* reverseKGroup(ListNode* head, int k) {
        if (!head || !head->next || k == 1) return head;
        ListNode* temp=head;
        ListNode* prevNode=NULL;

        while(temp != NULL){
            ListNode* kthPosition=findKthposition(temp,k);
            if(kthPosition == NULL){
                if(prevNode){
                    prevNode->next=temp;
                }
                break;
            }
            ListNode* nextPosition =kthPosition->next;
            kthPosition->next = nullptr;
            reverse(temp);
            if(temp == head){
                head=kthPosition;
            }else{
               prevNode->next=kthPosition;//
            }
            prevNode=temp;
            temp=nextPosition;
        }
        return head;
    }
};