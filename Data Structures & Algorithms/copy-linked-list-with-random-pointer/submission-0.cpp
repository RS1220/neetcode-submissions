
class Solution {
public:
    Node* copyRandomList(Node* head) {
         Node* a=head;
        //step1 clone
        while(a){
            Node* newnode=new Node(a->val);
            newnode->next=a->next;
            a->next=newnode;
            a=newnode->next;
        }
        //step2 random pointer
        a=head;
        while(a){
            if(a->random){
                a->next->random=a->random->next;
            }
            a=a->next->next;
        }
        //step3 separate
        Node *newList=new Node(50);
        Node* c=newList;
        a=head;

        while(a){
            c->next=a->next;
            c=c->next;
            a->next=a->next->next;
            a=a->next;
        }
        

        return newList->next;
    }
};
