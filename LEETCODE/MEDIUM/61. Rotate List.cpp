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
    ListNode* helper(ListNode* head, int k){
        ListNode* temp=head;
        while(temp){
            if(k==0){
                return temp;
            }
            temp=temp->next;
            k--;
        }
        return temp;
    }
    ListNode* rotateRight(ListNode* head, int k) {
        if (!head || !head->next || k == 0) return head;
        
        int cnt = 0;
        ListNode* temp=head;
        while (temp->next) {
            cnt++;
            temp = temp->next;
        }
        cnt++;
        if(k % cnt==0)     
            return head;
        
        k=k%cnt;

        ListNode* newLastNode=helper(head,cnt-k-1);
        temp->next=head;

        ListNode* newHead=newLastNode->next;
        newLastNode->next=NULL;


        return newHead;
    }
};