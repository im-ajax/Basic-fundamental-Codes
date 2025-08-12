// #include <bits/stdc++.h>
// using namespace std;
// class Node{
//    public:
//         int val;
//         Node* next;
//     Node(int val)
//     {
//         this->val=val;
//         this->next=NULL;
//     }
// };
// void insintail(Node* &head,Node* &tail,int val){
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
// void dlt(Node* &head){
//     Node* dltnode=head;
//     head=head->next;
//     delete dltnode;
// }
// void print(Node* &head){
//     Node* temp=head;
//     while (temp!=NULL)
//     {
//         cout<<temp->val<<" ";
//         temp=temp->next;
//     }
// }
// int main(){
//     Node* head=NULL;
//     Node* tail=NULL;
//     int val;
//     while (true)
//     {
//         cin>>val;
//         if (val==50)
//         {
//             break;
//         }
//         insintail(head,tail,val);
//     }
//     dlt(head);
//     print(head);
//     return 0;
// }




        //delete at any point

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
void insin(Node* &head,Node* &tail,int val){
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
void dltatanypos(Node* &head,int idx){
    Node* temp=head;
    for (int i = 1; i < idx; i++)
    {
        temp=temp->next;
    }
    Node* dltnode=temp->next;
    temp->next=temp->next->next;
    delete dltnode;
}
void print(Node* head){
    Node* temp=head;
    while (temp!=NULL)
    {
        cout<<temp->val<<endl;
        temp=temp->next;
    }
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
        insin(head,tail,val);
    }
    dltatanypos(head,2);
    print(head);
    return 0;
}