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
        int len=0;
        ListNode* temp=head;
        while(temp){
            len++;
            temp=temp->next;
        }
        cout<<len;
        int k=len-n;
        if(k==0){
            ListNode* del=head;
            head=head->next;
            delete del;
            return head;
        }
        temp=head;
        while(temp->next){
            k--;
            if(k==0){
                ListNode* del=temp->next;
                temp->next=temp->next->next;
                delete del;
                break;
            }
            temp=temp->next;
            
        }
        
        return head;
    }
};