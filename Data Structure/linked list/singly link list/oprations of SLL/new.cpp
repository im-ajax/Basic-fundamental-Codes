        //insert at any pos;;;;

#include <bits/stdc++.h>
using namespace std;
class Node{
    public:
        int val;
        Node* next;
    Node(int val){
        this->val=val;
        this->next=NULL;
    }   
};
void ins_anypos(Node* &head,int indx,int val){
    Node* newnode=new Node(val);
    Node* temp=head;
    for (int i=0;i<indx;i++)
    {
        temp=temp->next;
    }
    newnode->next=temp->next;
    temp->next=newnode;
}
void print_linked_list(Node* head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->val<<endl;
        temp=temp->next;
    }
}
int main(){
    Node* head=new Node(10);
    Node* a=new Node(20);
    Node* b=new Node(30);
    head->next=a;
    a->next=b;
    ins_anypos(head,2,100);
    print_linked_list(head);
    return 0;
}


        // insert at tail;;;;;

#include <bits/stdc++.h>
using namespace std;
class Node{
    public:
        int val;
        Node* next;
    Node(int val){
        this->val=val;
        this->next=NULL;
    }   
};
void ins_tail(Node* &head,int val){
    Node* newnode=new Node(val);
    if (head==NULL)
    {
        head=newnode;
    }
    Node* temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=newnode;
}
void print_list(Node* head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->val<<endl;
        temp=temp->next;
    }
}
int main(){
//if head==NULL 
// it will be segmantation fault
    // so handle it;
    Node* head=NULL;
    //Node* head=new Node(10);
    // Node* a=new Node(20);
    // Node* b=new Node(30);
    // head->next=a;
    // a->next=b;
    ins_tail(head,50);
    ins_tail(head,60);
    print_list(head);
    return 0;
}
            // insert at head;;;;;

// #include <bits/stdc++.h>
// using namespace std;
// class Node{
//     public:
//         int val;
//         Node* next;
//     Node(int val){
//         this->val=val;
//         this->next=NULL;
//     }   
// };
// void insert_at_head(Node* &head,int val){
//     Node* newnode=new Node(val);
//     newnode->next=head;
//     head=newnode;
// }
// void print_linked_list(Node* head){
//     Node* temp=head;
//     while(temp!=NULL){
//         cout<<temp->val<<endl;
//         temp=temp->next;
//     }
// }
// int main(){
//     Node* head=new Node(10);
//     Node* a=new Node(20);
//     Node* b=new Node(30);
//     head->next=a;
//     a->next=b;
//     insert_at_head(head,100);
//     insert_at_head(head,200);
//     insert_at_head(head,300);
//     print_linked_list(head);
//     return 0;
// }
