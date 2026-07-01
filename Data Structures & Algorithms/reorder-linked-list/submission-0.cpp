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
     ListNode* reverse(ListNode* & head) {
        ListNode* t=head;
        ListNode* newNode=NULL;

        while(head!=NULL){
            head=head->next;
            t->next=newNode;
            newNode=t;
            t=head;

        }
        return newNode;
    }

    ListNode* merge(ListNode* list1, ListNode* list2) {
        ListNode* a=list1;
        ListNode* b=list2;

        ListNode* newList=new ListNode(100);
        ListNode* c=newList;

        while(a!=NULL && b!=NULL){
            c->next=a;
            c=a;
            a=a->next;
            if(b!=NULL){
                 c->next=b;
            c=b;
            b=b->next;

            }
        }
        if(a==NULL) c->next=b;
        else c->next=a;
        

        return newList->next;
    }
    void reorderList(ListNode* head) {
        
        ListNode* slow=head;
        ListNode* fast=head;
        ListNode* r=NULL;


        while(fast!=NULL && fast->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
        }

        r=slow->next;
        slow->next=NULL;

        ListNode* newhead=reverse(r);

        head= merge(head , newhead);
        return ;

        
        
    }
};
