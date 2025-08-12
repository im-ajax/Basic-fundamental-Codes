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
class mystack{
    public:
    Node *head=NULL;
    Node *tail=NULL;
    int sz=0;
    void push(int val){
        sz++;
        Node *newnode=new Node(val);
        if(head==NULL){
            head=newnode;
            tail=newnode;
            return;
        }
            tail->next=newnode;
            newnode->pre=tail;
            tail=newnode;
        }
        void pop(){
            sz--;   
            Node *dltnode=tail;
            tail=tail->pre;
            delete dltnode;
            if(tail==NULL){
                head=NULL;
                return;
            }   
                tail->next=NULL;
        }
            int top(){
                return tail->val;
        }   
            int size(){
                return sz;
        }
            bool empty(){
                return head==NULL;
            }
};
class myqueue
int main(){
    
    return 0;
}












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
// //insert in tail
// void insintail(Node *head,Node *&tail,int val){
//     Node* newnode=new Node(val);
//     if(head==NULL){
//         head=newnode;
//         tail=newnode;
//         return;
//     }
//     tail->next=newnode;
//     newnode->pre=tail;
//     tail=newnode;
// }
// //insert in head
// void insinhead(Node* &head,Node* tail,int val){
//     Node* newnode=new Node(val);
//     newnode->next=head;
//     head->pre=newnode;
//     head=newnode;
//     head->pre=NULL;
// }
// //insert in any pos
// void insinanypos(Node *&head,int idx,int val){
//     Node *newnode=new Node(val);
//     Node *tmp=head;
//     for (int i = 1; i < idx; i++)
//     {
//         tmp=tmp->next;
//     }
//     newnode->next=tmp->next;
//     tmp->next=newnode;
//     tmp->next->pre=newnode;
//     newnode->pre=tmp;   
// }
// //delete on head
// void dlthead(Node* &head){
//     Node* newnode=head;
//     head=head->next;
//     head->pre=newnode;
//     delete newnode;
// }
// //delete at tail
// void dlttail(Node* &tail){
//     Node* newnode=tail;
//     tail=tail->pre;
//     tail->next=newnode;
//     delete newnode;
// }
// //delete at any pos
// void dltanypos(Node *&head,int idx){
//     Node *tmp=head;
//     for (int i = 1; i < idx; i++)
//     {
//         tmp=tmp->next;
//     }
//     Node *newnode=tmp->next;
//     tmp->next=newnode;
//     newnode->next=tmp->next;
//     tmp->next->pre=newnode;
//     delete newnode;
// }
// //printing
// void print(Node *&head){
//     Node* tmp=head;
//     while (tmp!=NULL)
//     {
//         cout<<tmp->val<<" ";
//         tmp=tmp->next;
//     }
//     cout<<endl;
// }
// //printing reverse order
// void printrev(Node *tail){
//     Node *tmp=tail;
//     while (tmp!=NULL)
//     {
//         cout<<tmp->val<<" ";
//         tmp=tmp->pre;
//     }
//     cout<<endl;
// }
// int main(){
//     Node *head=NULL;
//     Node *tail=NULL;
//     int val;
//     while (true)
//     {
//         cin>>val;
//         if(val==-1)
//             break;
//         insintail(head,tail,val);
//         //insinhead(head,tail,val);
//     }
//     //dlttail(head);
//     //dlthead(head);
//     print(head);
//     //printrev(tail);
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
// class myStack{
//     public:
//     Node* head=NULL;
//     Node* tail=NULL;
//     int sz=0;
//         void push(int val){
//             sz++;
//             Node* newnode=new Node(val);
//             if(head==NULL){
//                 head=newnode;
//                 tail=newnode;
//                 return;
//             }
//             tail->next=newnode;
//             newnode->pre=tail;
//             tail=newnode;
//         }
//         void pop(){
//             sz--;
//             Node* dltnode=tail;
//             tail=tail->pre;
//             delete dltnode;
//             if(tail==NULL){
//                 head=NULL;
//                 return;
//             }
//             tail->next=NULL;
//         }
//         int top(){
//             return tail->val;
//         }
//         int size(){
//             return sz;
//         }
//         bool empty(){
//             return head==NULL;
//         }
// };
// class myQueue{
//     public:
//     Node* head=NULL;
//     Node* tail=NULL;
//     int sz=0;
//         void push(int val){
//             sz++;
//             Node* newnode=new Node(val);
//             if(head==NULL){
//                 head=newnode;
//                 tail=newnode;
//                 return;
//             }
//             tail->next=newnode;
//             newnode->pre=tail;
//             tail=newnode;
//         }
//         void pop(){
//             sz--;
//             Node *dltnode=head;
//             head=head->next;
//             delete dltnode;
//             if(head==NULL){
//                 tail=NULL;
//                 return;
//             }
//             head->pre=NULL;
//         }
//         int size(){
//             return sz;
//         }
//         int front(){
//             return head->val;
//         }
//         bool empty(){
//             return head==NULL;
//         }
// };
// int main(){
//     int val;cin>>val;
//     return 0;
// }





// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int cnt=0;
//     vector<int> v(n);
//     for (int i = 0; i < n; i++)
//     {
//         cin>>v[i];
//     }
//     for (int i = 0; i < n; i++)
//     {
//         int sum;
//         sum=v[i]+1;
//         if (find(v.begin(),v.end(),sum)!=v.end())
//         {
//             cnt++;
//         }
//     }
//     cout<<cnt<<endl;
//     return 0;
// }



// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     vector<int> v(n);
//     for(int i=0;i<n;i++){
//         cin>>v[i];
//     }
//     for(int i=0;i<n;i++){
//         if (v[i]+1==v[j])
//         {
//             /* code */
//         }
        
        
//     }
//     return 0;
// }



// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     string s;
//     cin >> s;
//     vector<int> freq(26, 0); 
//     for (int i = 0; i < s.size(); i++)
//     {
//         freq[s[i] - 'a']++;
//     }
//     for (int i = 0; i < 26; i++)
//     {
//         if (freq[i] >= 1)
//         {
//             cout<<char(i+'a')<<" : "<<freq[i]<<endl;
//         }
//     }
//     return 0;
// }
// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     vector<int> v(n);
//     for (int i = 0; i < n; i++)
//     {
//         cin>>v[i];
//     }
//     for (int i = 0; i < n; i++)
//     {
//         if (v[i]>0)
//         {
//             cout<<"1"<<" ";
//         }
//         else if (v[i]==0)
//         {
//             cout<<"0"<<" ";
//         }
//         else{
//             cout<<"2"<<" ";
//         }
//     }
//     return 0;
// }


