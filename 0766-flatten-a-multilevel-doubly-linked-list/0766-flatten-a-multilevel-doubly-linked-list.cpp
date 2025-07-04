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

class Solution {
public:
    Node* flatten(Node* head) {
        stack<Node*>s;
        Node* temp=head;
        while(temp || !s.empty()){

            if(temp->child){
                if(temp->next){
                s.push(temp->next);
                temp->next->prev=nullptr;   
                }
                temp->next=temp->child;
                temp->child->prev=temp;
                temp->child=nullptr;
            }

            if(!temp->next && !s.empty()){
                Node* s_top=s.top(); s.pop();
                s_top->prev=temp;
                temp->next=s_top;
            }
            temp=temp->next;
        }
       
        return head; 
    }
};