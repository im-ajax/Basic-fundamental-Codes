//             remove duplicate

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
// void insin(Node* &head,Node* &tail,int val){
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
// void dltdups(Node* &head){
//     Node* temp=head;
//     while (temp!=NULL)
//     {
//         Node* temp2=temp;
//         while (temp2->next!=NULL)
//         {
//             if (temp2->next->val==temp->val)
//             {
//                 Node* dup=temp2->next;
//                 temp2->next=temp2->next->next;
//                 delete dup;
//             }
//             else{
//                 temp2=temp2->next;
//             }
//         }
//         temp=temp->next;
//     }
// }
// void print(Node* head){
//     Node* temp=head;
//     while(temp!=NULL)
//     {
//         cout<<temp->val<<" ";
//         temp=temp->next;
//     }
//     cout << endl;
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
//         insin(head,tail,val);
//     }
//     dltdups(head);
//     print(head);
//     return 0;
// }


//                same to same

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
// void insin(Node* &head,Node* &tail,int val){
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
// void dltlist(Node* &head){
//     Node* temp=head;
//     while (head!=NULL)
//     {
//         temp=head;
//         head=head->next;
//         delete temp;
//     }
// }
// int main(){
//     Node* head1=NULL;
//     Node* tail1=NULL;
//     Node* head2=NULL;
//     Node* tail2=NULL;
//     int val;
//     while (true)
//     {
//         cin>>val;
//         if (val==-1)
//         {
//             break;
//         }
//         insin(head1,tail1,val);
//     }
//     while (true)
//     {
//         cin>>val;
//         if (val==-1)
//         {
//             break;
//         }
//         insin(head2,tail2,val);
//     }
//     Node* temp1=head1;
//     Node* temp2=head2;
//     while (temp1!=NULL&&temp2!=NULL)
//     {
//         if (temp1->val!=temp2->val)
//         {
//             cout<<"NO"<<endl;
//             dltlist(head1);
//             dltlist(head2);
//             return 0;
//         }
//         temp1=temp1->next;
//         temp2=temp2->next;
//     }
//     if (temp1!=NULL||temp2!=NULL)
//     {
//         cout<<"NO"<<endl;
//     }
//     else{
//         cout<<"YES"<<endl;
//     }
//     return 0;
// }

        
//         search

// #include <bits/stdc++.h>
// using namespace std;
// class Node {
//     public:
//         int val;
//         Node* next;
//         Node(int val) 
//     {
//         this->val=val;
//         this->next=NULL;
//     }
// };
// void insin(Node* &head,Node* &tail,int val) {
//     Node* newnode=new Node(val);
//     if (head==NULL) 
//     {
//         head=newnode;
//         tail=newnode;
//         return;
//     }
//         tail->next=newnode;
//         tail=newnode;
// }
// int indexkhuj(Node* head,int x) {
//     int idx=0;
//     Node* temp=head;
//     while (temp!=NULL) {
//         if (temp->val==x) 
//         {
//             return idx;
//         }
//         temp=temp->next;
//         idx++;
//     }
//     return -1;
// }
// void dltlist(Node* &head){
//     Node* temp;
//     while (head!=NULL) 
//     {
//         temp=head;
//         head=head->next;
//         delete temp;
//     }
// }
// int main() {
//     int t;
//     cin>>t;
//     while (t--)
//     {
//         Node* head=NULL;
//         Node* tail=NULL;
//         int val;
//         while (true)
//         {
//             cin>>val;
//             if (val==-1)
//             {
//                 break;
//             }
//             insin(head,tail,val);
//         }
//         int x;
//         cin>>x;
//         int result=indexkhuj(head,x);
//         cout<<result<<endl;
//         dltlist(head);
//     }
//     return 0;
// }

        
//         difference

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
//         tail->next=newnode;
//         tail=newnode;    
// }
// int absdif(Node* head){
//     if (head==NULL)
//     {
//         return 0;
//     }
//     int maxv=INT_MIN;
//     int minv=INT_MAX;
//     Node* temp=head;
//     while (temp!=NULL)
//     {
//         maxv=max(maxv,temp->val);
//         minv=min(minv,temp->val);
//         temp=temp->next;
//     }
//     return maxv-minv;
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
//     absdif(head);
//     cout<<absdif(head)<<endl;
//     return 0;
// }



// queries

// #include <bits/stdc++.h>
// using namespace std;

// class Node
// {
// public:
//     int valu;
//     Node *next;

//     Node(int valu)
//     {
//         this->valu = valu;
//         this->next = NULL;
//     }
// };

// void insert_at_tail(Node *&head, Node *&tail, int valu)
// {
//     Node *newnode = new Node(valu);
//     if (head == NULL)
//     {
//         head = newnode;
//         tail = newnode;
//         return;
//     }
//     tail->next = newnode;
//     tail = newnode;
// }

// void insert_at_head(Node *&head, Node *&tail, int valu)
// {
//     Node *newnode = new Node(valu);
//     if (head == NULL)
//     {
//         head = newnode;
//         tail = newnode;
//         return;
//     }
//     newnode->next = head;
//     head = newnode;
// }

// int size_list(Node *head)
// {
//     int cnt = 0;
//     Node *tmp = head;
//     while (tmp != NULL)
//     {
//         cnt++;
//         tmp = tmp->next;
//     }
//     return cnt;
// }

// void delete_at_any_pos(Node *&head, Node *&tail, int idx)
// {
//     if (idx < 0 || idx >= size_list(head))
//     {
//         // Invalid index, do nothing
//         return;
//     }

//     if (idx == 0)
//     {
//         Node *deleteNode = head;
//         head = head->next;
//         if (head == NULL) 
//         	tail = NULL; // List is now empty
//         delete deleteNode;
//         return;
//     }

//     Node *tmp = head;
//     for (int i = 0; i < idx - 1; i++)
//     {
//         tmp = tmp->next;
//     }

//     Node *deleteNode = tmp->next;
//     tmp->next = tmp->next->next;

//     if (deleteNode == tail)
//     {
//         tail = tmp; // update tail if last element deleted
//     }

//     delete deleteNode;
// }

// void print_list(Node *head)
// {
//     Node *tmp = head;
//     while (tmp != NULL)
//     {
//         cout << tmp->valu << " ";
//         tmp = tmp->next;
//     }
//     cout << endl;
// }

// int main()
// {
//     int Q;
//     cin >> Q;

//     Node *head = NULL;
//     Node *tail = NULL;

//     while (Q--)
//     {
//         int qre, valu;
//         cin >> qre >> valu;

//         if (qre == 0)
//         {
//             insert_at_head(head, tail, valu);
//         }
//         else if (qre == 1)
//         {
//             insert_at_tail(head, tail, valu);
//         }
//         else if (qre == 2)
//         {
//             delete_at_any_pos(head, tail, valu);
//         }

//         print_list(head);
//     }

//     return 0;
// }








            //hardest practice

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
//         tail->next=newnode;
//         tail=newnode;    
// }
// void print(Node* head){
//     Node* temp=head;
//     while (temp==NULL)
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
//     print(head);
//     return 0;
// }
