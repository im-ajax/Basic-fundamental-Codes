#include <bits/stdc++.h>
using namespace std;
class Node{
   public:
        int val;
        Node* next;
        Node* pre;
    Node(int val)
    {
        this->pre=NULL;
        this->val=val;
        this->next=NULL;
    }
};
void pntfor(Node* head){
    Node* temp=head;
    while (temp!=NULL)
    {
        cout<<temp->val<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
void prntback(Node* tail){
    Node* temp=tail;
    while (temp!=NULL)
    {
        cout<<temp->val<<" ";
        temp=temp->pre;
    }
    cout<<endl;
}
int main(){
    Node* head=new Node(10);
    Node* a=new Node(20);
    Node* tail=new Node(30);
    head->next=a;
    a->pre=head;
    a->next=tail;
    tail->pre=a;
    pntfor(head);
    prntback(tail);
    return 0;
}
