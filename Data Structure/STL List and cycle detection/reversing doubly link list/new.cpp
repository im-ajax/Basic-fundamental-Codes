#include <bits/stdc++.h>
using namespace std;
class Node{
   public:
        Node* pre;
        int val;
        Node* next;
    Node(int val)
    {
        this->pre=NULL;
        this->val=val;
        this->next=NULL;
    }
};
void ins(Node* &head,Node* &tail,int val){
    Node* newnode=new Node(val);
    if (head==NULL)
    {
        head=newnode;
        tail=newnode;
        return;
    }
    tail->next=newnode;
    tail=newnode;
}
void revev(Node* head,Node* tail){
    for(Node *i=head,*j=tail;i!=j && i->pre!=j;i=i->next,j=j->pre)
    {
        swap(i->val,j->val);
    }
}
void prnt(Node* head){
    Node* tmp=head;
    while (tmp!=NULL)
    {
        cout<<tmp->val<<endl;
        tmp=tmp->next;
    }
}
int main(){
    Node* head=NULL;
    Node* tail=NULL;
    int val;
    while (true)
    {
        cin>>val;
        if (val==-1)
        {
            break;
        }
        ins(head,tail,val);
    }
    revev(head,head);
    prnt(head);
    return 0;
}
