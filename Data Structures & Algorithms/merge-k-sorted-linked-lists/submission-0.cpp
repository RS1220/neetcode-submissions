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
    ListNode* merge( ListNode* list1 ,  ListNode* list2){
        ListNode* a=list1;
        ListNode* b=list2;

        ListNode* newhead=new ListNode(50);
        ListNode* c=newhead;

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


        return newhead->next;

    }
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        
        int n=lists.size();
        if(n==0) return nullptr;
    while(n>1){
        ListNode* a=lists[0];
        lists.erase(lists.begin());

        ListNode* b=lists[0];
        lists.erase(lists.begin());

        ListNode* c=merge(a , b);
        lists.push_back(c);
        n--;


    }
        
        return lists[0];
    }
};
