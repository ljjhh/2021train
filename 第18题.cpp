       /*
// Definition for a Node.
class Node {
public:
    int val;
    Node* prev;
    Node* next;
    Node* child;
};
*/

Node *digui(Node *p){
    Node *p1;
    while(p&&p->next){
        if(!p->child) p=p->next;
        else {
            p1=digui(p->child);
            p1->next=p->next;
            p->next->prev=p1;
            p->next=p->child;
            p->child->prev=p;
            p->child=NULL;
        }
        if(!p->next&&!p) break; 
    }
    return p;
};

class Solution {
public:
    Node* flatten(Node* head) {
        Node* p;
        p=head;
        digui(p);
        return p;
    }
};
