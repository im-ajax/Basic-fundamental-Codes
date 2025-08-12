//self practice
#include <bits/stdc++.h>
using namespace std;
class Node{
   public:
        int val;
        Node* next;
    Node(int val)
    {
        this->val=val;
        this->next=NULL;
    }
};
void instail(Node* &head,Node* &tail,int val){
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
void rev(Node* &head,Node* tmp){
    while (tmp->next==NULL)
    {
        head=tmp;
        return;
    }
    rev(head,tmp->next);
    tmp->next->next=tmp;
    tmp->next=NULL;
}
void print(Node* &head){
    Node*tmp=head;
    while (tmp!=NULL)
    {
        cout<<tmp->val<<" ";
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
        instail(head,tail,val);
    }
    rev(head,head);
    print(head);
    return 0;
}
