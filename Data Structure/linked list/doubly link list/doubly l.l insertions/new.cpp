            //insert at head

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
void insinhead(Node* &head,int val){
    Node* newnode=new Node(val);
    newnode->next=head;
    head->pre=newnode;
    head=newnode;
}
void pntfor(Node* head){
    Node* temp=head;
    while (temp!=NULL)
    {
        cout<<temp->val<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
int main(){
    Node* head=new Node(10);
    Node* a=new Node(20);
    Node* b=new Node(30);
    head->next=a;
    a->pre=head;
    a->next=b;
    b->pre=a;
    insinhead(head,100);
    pntfor(head);
    return 0;
}

            //inst at tail

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
void insintail(Node* &head,Node* &tail,int val){
    Node* newnode=new Node(val);
    if (head==NULL)
    {
        head=newnode;
        tail=newnode;
        return;
    }
    tail->next=newnode;
    newnode->pre=tail;
    tail=newnode;
}
void pntfor(Node* head){
    Node* temp=head;
    while (temp!=NULL)
    {
        cout<<temp->val<<" ";
        temp=temp->next;
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
    insintail(head,tail,100);
    pntfor(head);
    return 0;
}


            //insert at any pos

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
void insinanypos(Node* head,int idx,int val){
    Node* newnode=new Node(val);
    Node* temp=head;
    for (int i = 1; i < idx; i++)
    {
        temp=temp->next;
    }
    newnode->next=temp->next;
    temp->next->pre=newnode;
    temp->next=newnode;
    newnode->pre=temp;
}
void pntfor(Node* head){
    Node* temp=head;
    while (temp!=NULL)
    {
        cout<<temp->val<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
int main(){
    Node* head=new Node(10);
    Node* a=new Node(20);
    Node* tail=new Node(30);
    head->next=a;
    a->next=tail;
    tail->pre=a;
    a->pre=head;
    insinanypos(head,2,100);
    pntfor(head);
    return 0;
}

