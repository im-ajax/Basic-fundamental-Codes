// #include <bits/stdc++.h>
// using namespace std;
// class myStack{
//     public:
//     vector<int> v;
//         void push(int val){
//             v.push_back(val);
//         }
//         void pop(){
//             v.pop_back();
//         }
//         int top(){
//             return v.back();
//         }
//         int size(){
//             return v.size();
//         }
//         bool empty(){
//             return v.empty();  
//         }
// };
// int main(){
//     myStack st;
//     st.push(10);
//     st.push(20);
//     st.push(30);
    
//     cout<<st.top()<<endl;
//     st.pop();
//     cout<<st.top()<<endl;
//     st.pop();
//     cout<<st.top()<<endl;
//     st.pop();
//     if(!st.empty())
//         cout<<st.top()<<endl;
//     if (!st.empty())
//     {
//         st.pop();
//     }
    
//     return 0;
// }



            //taking inputs

// #include <bits/stdc++.h>
// using namespace std;
// class myStack{
//     public:
//     vector<int> v;
//         void push(int val){
//             v.push_back(val);
//         }
//         void pop(){
//             v.pop_back();
//         }
//         int top(){
//             return v.back();
//         }
//         int size(){
//             return v.size();
//         }
//         bool empty(){
//             return v.empty();  
//         }
// };
// int main(){
//     myStack st;
//     int t;
//     cin>>t;
//     for (int i = 0; i < t; i++)
//     {
//         int x;
//         cin>>x;
//         st.push(x);
//     }
//     while (!st.empty())
//     {
//         cout<<st.top()<<endl;
//         st.pop();
//     }
//     return 0;
// }


                //using list

// #include <bits/stdc++.h>
// using namespace std;
// class myStack{
//     public:
//     list<int> l;
//         void push(int val){
//             l.push_back(val);
//         }
//         void pop(){
//             l.pop_back();
//         }
//         int top(){
//             return l.back();
//         }
//         int size(){
//             return l.size();
//         }
//         bool empty(){
//             return l.empty();  
//         }
// };
// int main(){
//     myStack st;
//     int t;
//     cin>>t;
//     for (int i = 0; i < t; i++)
//     {
//         int x;
//         cin>>x;
//         st.push(x);
//     }
//     while (!st.empty())
//     {
//         cout<<st.top()<<endl;
//         st.pop();
//     }
//     return 0;
// }

            //using doubly link list

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
class myStack{
    public:
    Node* head=NULL;
    Node* tail=NULL;
    int sz=0;
        void push(int val){
            sz++;
            Node* newnode=new Node(val);
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
            Node* dltnode=tail;
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
            // if(head==NULL)
            //     return true;
            // else 
            //     return false;
            
            // for making short, we can use
                return head==NULL;
        }
};
int main(){
    myStack st;
    int t;
    cin>>t;
    for (int i = 0; i < t; i++)
    {
        int x;
        cin>>x;
        st.push(x);
    }
    while (!st.empty())
    {
        cout<<st.top()<<endl;
        st.pop();
    }
    return 0;
}

