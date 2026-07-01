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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* a=list1;
        ListNode* b=list2;

        ListNode* newList=new ListNode(100);
        ListNode* c=newList;


        while(a!=NULL && b!=NULL){
            if(a->val >= b->val){
                c->next=b;
                c=b;
                b=b->next;
  
            }
            else{
                c->next=a;
                c=a;
                a=a->next;
                
            }
        }

        if(a==NULL) c->next=b;
        else c->next=a;

        return newList->next;
    }
};
