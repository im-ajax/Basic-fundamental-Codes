            // delete at head

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
        head==newnode;
        tail=newnode;
        return;
    }
    tail->next=newnode;
    tail=newnode;
}
void dlthead(Node* &head,Node* &tail){
    Node* newnode=head;
    head=head->next;
    delete newnode;
    if (head==NULL)
    {
        tail=NULL;
        return;
    }
    head->pre=NULL;
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
    dlthead(head,tail);
    pntfor(head);
    return 0;
}

        // delete at tail

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
void dlttail(Node* &head,Node* &tail){
    Node* newnode=tail;
    tail=tail->pre;
        delete newnode;
        if (tail==NULL)
        {
            head=NULL;
            return;
        }
        tail->next=NULL;
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
    dlttail(head,tail);
    pntfor(head);
    return 0;
}

            //delete at any pos

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
void pntfor(Node* head){
    Node* temp=head;
    while (temp!=NULL)
    {
        cout<<temp->val<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
void atany(Node* head,int idx){
    Node* temp=head;
    for (int i = 1; i < idx; i++)
    {
        temp=temp->next;
    }
    Node* newnode=temp->next;
    temp->next=temp->next->next;
    temp->next->pre=temp;
    delete newnode;
}

int main(){
    Node* head=new Node(10);
    Node* a=new Node(20);
    Node* tail=new Node(30);
    head->next=a;
    a->next=tail;
    tail->pre=a;
    a->pre=head;
    atany(head,1);
    pntfor(head);
    return 0;
}

