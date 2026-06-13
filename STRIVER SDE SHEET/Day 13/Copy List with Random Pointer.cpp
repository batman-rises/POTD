/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
        if(head==NULL)return NULL;

        unordered_map<Node*,Node*> mp;
        Node* newHead=new Node(head->val);
        Node* oldtemp=head->next;
        Node* newTemp=newHead;
        
        mp[head]=newHead;

        while(oldtemp){
            Node* copy=new Node(oldtemp->val);
            mp[oldtemp]=copy;
            newTemp->next=copy;
            oldtemp=oldtemp->next;
            newTemp=newTemp->next;
        }
        oldtemp=head;
        newTemp=newHead;
        while(oldtemp){
            newTemp->random=mp[oldtemp->random];
            oldtemp=oldtemp->next;
            newTemp=newTemp->next;
        }
        return newHead;
    }
};