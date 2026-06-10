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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* t1=l1;
        ListNode* t2=l2;
        ListNode* dummyNode=new ListNode(-1);
        ListNode* temp=dummyNode; 
        int carry=0;
        while(t1||t2||carry){
            int x=(t1)? t1->val : 0;
            int y=(t2)? t2->val : 0;
            ListNode* newNode=new ListNode((x+y+carry)%10);
            temp->next=newNode;
            temp=newNode;
            carry=(x+y+carry) / 10;
            if(t1){
                t1=t1->next;
            }
            if(t2){
                t2=t2->next;
            }
        }
        return dummyNode->next;
    }
};