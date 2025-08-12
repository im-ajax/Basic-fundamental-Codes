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
// void sort(Node* head){
//     for (Node* i=head;i->next!=NULL;i=i->next)
//     {
//         for (Node* j=i->next;j!=NULL;j=j->next)
//         {
//             if (i->val>j->val)
//             {
//                 swap(i->val,j->val);
//             }
//         }
//     }
// }
// void print(Node* head){
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
//         if (val==-1)
//         {
//             break;
//         }
//         ins(head,tail,val);
//     }
//     sort(head);
//     print(head);
//     return 0;
// }



#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int valu;
    Node *next;
    Node(int valu)
    {
        this->valu = valu;
        this->next = NULL;
    }
};
void insert_at_tail(Node *&head, Node *&tail, int valu)
{
    Node *newnode = new Node(valu);
    if (head == NULL)
    {
        head = newnode;
        tail = newnode;
        return;
    }
    tail->next = newnode;
    tail = tail->next;
}
void insert_at_head(Node *&head, Node *&tail, int valu)
{
    Node *newnode = new Node(valu);
    if (head == NULL)
    {
        head = newnode;
        tail = newnode;
        return;
    }
    newnode->next = head;
    head= newnode;
}
void delete_at_any_pos(Node *&head, int idx)
{
    Node *tmp = head;
    for (int i = 0; i < idx - 1; i++)
    {
        tmp = tmp->next;
    }
    Node *deletenode = tmp->next;
    tmp->next = tmp->next->next;
    delete deletenode;
}
int size_list(Node *head)
{
    int cnt = 0;
    Node *tmp = head;
    while (tmp != NULL)
    {
        cnt++;
        tmp = tmp->next;
    }
    return cnt;
}

void print_list(Node *head)
{
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->valu << " ";
        tmp = tmp->next;
    }
    cout << endl;
}

int main()
{
    int Q;
    cin >> Q;
    while (Q--)
    {

        Node *head = NULL;
        Node *tail = NULL;
        int valu;
        int qre;
        while (cin >> qre >> valu)
        {
            if (qre == 0)
            {

                insert_at_head(head, tail, valu);
                print_list(head);
            }
            else if (qre == 1)
            {

                insert_at_tail(head, tail, valu);
                print_list(head);
            }
            else
            {
                if (qre == 2)
                {

                    int idx;
                    cin >> idx;
                    int sz = size_list(head);
                    if (idx > sz)
                    {
                        print_list(head);
                    }
                    else if (idx == sz)
                    {
                        print_list(head);
                    }
                    else
                    {
                        delete_at_any_pos(head, idx);
                        print_list(head);
                    }
                }
            }
        }
        
    }

    return 0;
}