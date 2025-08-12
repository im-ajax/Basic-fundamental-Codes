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
void print(Node* &head){
    Node*temp=head;
    while (temp!=NULL)
    {
        cout<<temp->val<<" ";
        temp=temp->next;
    }
}
void printrev(Node* temp){
    while (temp==NULL)
    {
        return;
    }
    printrev(temp->next);
    cout<<temp->val<<" ";
}
int main(){
    Node* head=NULL;
    Node* tail=NULL;
    int val;
    while (true)
    {
        cin>>val;
        if (val==50)
        {
            break;
        }
        instail(head,tail,val);
    }
    //print(head);
    printrev(head);
    return 0;
}


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
// void ins_tail(Node* &head,Node* &tail,int val){
//     Node* newnode=new Node(val);
//     if (head==NULL)
//     {
//         head=newnode;
//         tail=newnode;
//         return;
//     }
//     tail->next=newnode;
//     tail=newnode;
// }
// void print_list(Node* head){
//     Node* temp=head;
//     while(temp!=NULL){
//         cout<<temp->val<<endl;
//         temp=temp->next;
//     }
// }
// void prnt_rev(Node* temp)
// {
//     if (temp==NULL)
//     {
//         return;
//     }
//     prnt_rev(temp->next);
//     cout<<temp->val<<endl;
// }
// int main(){
//     Node* head=NULL;
//     Node* tail=NULL;
//     int val;
//     while(true){
//         cin>>val;
//         if (val==50)
//         {
//             break;
//         }
//         ins_tail(head,tail,val);
//     }
//     print_list(head);
//     return 0;
// }
