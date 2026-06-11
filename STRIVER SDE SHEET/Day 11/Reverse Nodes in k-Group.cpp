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
    ListNode* helper(ListNode* head,int k){
        ListNode* temp=head;
        while(temp && k--){
            temp=temp->next;
        }
        return temp;
    }
    void reverseList(ListNode* head){
        ListNode* next=NULL;
        ListNode* prev=NULL;
        ListNode* cur=head;
        while(cur){
            next=cur->next;
            cur->next=prev;

            prev=cur;
            cur=next;
        }
        return;
    }
    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode* temp=head;
        ListNode* nextNode=NULL;
        ListNode* prevNode=NULL;
        while(temp){
            ListNode* kthNode=helper(temp,k-1);
            if(kthNode == NULL){
                if(prevNode) prevNode->next=temp;
                return head;
            }
            nextNode=kthNode->next;
            kthNode->next=NULL;
            reverseList(temp);
            if(temp==head){
                head=kthNode;
            }else{
                prevNode->next=kthNode;
            }
            prevNode=temp;
            temp=nextNode;
        }
        return head;
    }
};