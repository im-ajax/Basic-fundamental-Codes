// #include <bits/stdc++.h>
// using namespace std;
// class Node{
//    public:
//         Node* pre;
//         int val;
//         Node* next;
//     Node(int val)
//     {
//         this->pre=NULL;
//         this->val=val;
//         this->next=NULL;
//     }
// };
// void ins(Node* &head,Node* &tail,int val){
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
// void pnt(Node* head){
//     Node* temp=head;
//     while (temp!=NULL)
//     {
//         cout<<temp->val<<" ";
//         temp=temp->next;
//     }
//     cout<<endl;
// }
// int main(){
//     Node* head=NULL;
//     Node* tail=NULL;
//     int val;
//     while (true)
//     {
//         cin>>val;
//         if (val==-1)
//         {
//             break;
//         }
//         ins(head,tail,val);
//     }
//     pnt(head);
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// class Node{
//    public:
//         Node* pre;
//         int val;
//         Node* next;
//     Node(int val)
//     {
//         this->pre=NULL;
//         this->val=val;
//         this->next=NULL;
//     }
// };
// void ins(Node* &head,Node* &tail,int val){
//     Node* newnode=new Node(val);
//     if (head==NULL)
//     {
//         head=newnode;
//         tail=newnode;
//         return;
//     }
//     tail->next=newnode;
//     newnode->pre=tail;
//     tail=newnode;
// }
// void dlttail(Node* head,Node* tail){
//     Node* newnode=tail;
//     tail=tail->pre;
//     delete newnode;
//     if (tail==NULL)
//     {
//         head=NULL;
//         return;
//     }
//     tail->next=NULL;
// }
// void print(Node* head){
//     Node* tmp=head;
//     while (tmp!=NULL)
//     {
//         cout<<tmp->val<<" ";
//         tmp=tmp->next;
//     }
// }
// int main(){
//     Node* head=NULL;
//     Node* tail=NULL;
//     int val;
//     while (true)
//     {
//         cin>>val;
//         if (val==-1)
//         {
//             break;
//         }
//         ins(head,tail,val);
//     }
//     dlttail(head,tail);
//     print(head);
//     return 0;
// }

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
    newnode->pre=tail;
    tail=newnode;
}
void print(Node* head){
    Node* tmp=head;
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
        ins(head,tail,val);
    }
    //dltpos(head);
    print(head);
    return 0;
}
