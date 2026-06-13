/*
Definition of special linked list:
struct ListNode
{
    int val;
    ListNode *next;
    ListNode *child;
    ListNode()
    {
        val = 0;
        next = NULL;
        child = NULL;
    }
    ListNode(int data1)
    {
        val = data1;
        next = NULL;
        child = NULL;
    }
    ListNode(int data1, ListNode *next1, ListNode* next2)
    {
        val = data1;
        next = next1;
        child = next1;
    }
};
*/

class Solution {
public:
    ListNode* mergeLists(ListNode* h1,ListNode* h2){
        ListNode* t1=h1;
        ListNode* t2=h2;
        ListNode* dummy=new ListNode(-1);
        ListNode* temp=dummy;
        while(t1 && t2){
            if(t1->val < t2->val){
                temp->child=t1;
                temp=t1;
                t1=t1->child;
            }else{
                temp->child=t2;
                temp=t2;
                t2=t2->child;
            }
        }
        temp->child = t1 ? t1 : t2;
        return dummy->child;
    }
    ListNode* flattenLinkedList(ListNode* &head) {
        if(head==NULL)return NULL;
        ListNode* h1=head;
        ListNode* h2=flattenLinkedList(head->next);
        return mergeLists(h1,h2);
    }
};