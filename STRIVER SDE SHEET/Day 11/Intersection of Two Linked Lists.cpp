class Solution {
public:
    int countLength(ListNode *head){
        int c=0;
        ListNode *temp=head;
        while(temp){
            c++;
            temp=temp->next;
        }
        return c;
    }
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        int c1=countLength(headA);
        int c2=countLength(headB);
        int k=abs(c1-c2);
        ListNode *larger=NULL;
        ListNode *slower=NULL;
        if(c1>c2){
            larger=headA;
            slower=headB;
        }else{
            larger=headB;
            slower=headA;
        }
        while(k--){
            larger=larger->next;
        }
        while(larger != slower){
            larger=larger->next;
            slower=slower->next;
        }
        return slower;
    }
};