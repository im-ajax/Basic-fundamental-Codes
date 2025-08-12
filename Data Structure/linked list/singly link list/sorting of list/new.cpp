            //sort array

// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int a[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin>>a[i];
//     }
//     for (int i = 0; i < n-1; i++)
//     {
//         for (int j = i+1; j < n; j++)
//         {
//             if (a[i]>a[j])
//             {
//                 swap(a[i],a[j]);
//             }
//         }   
//     }
//     for (int i = 0; i < n; i++)
//     {
//         cout<<a[i]<<" ";
//     }
//     return 0;
// }



            //sort linked list

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
void sort(Node* head){
    for (Node* i=head;i->next!=NULL;i=i->next)
    {
        for (Node* j=i->next;j!=NULL;j=j->next)
        {
            if (i->val>j->val)
            {
                swap(i->val,j->val);
            }
        }
    }
}
void print(Node* head){
    Node* temp=head;
    while (temp!=NULL)
    {
        cout<<temp->val<<" ";
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
        if (val==-1)
        {
            break;
        }
        ins(head,tail,val);
    }
    sort(head);
    print(head);
    return 0;
}
