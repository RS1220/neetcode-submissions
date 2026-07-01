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
    ListNode* reverseList(ListNode* head) {
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
};
