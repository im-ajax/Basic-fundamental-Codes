// //raw stack and queue implementation

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
// class Mystack{
//     public:
//     Node* head=NULL;
//     Node* tail=NULL;
//     int sz=0;
//         void push(int val){
//             sz++;
//             Node* newnode=new Node (val);
//             if (head==NULL)
//             {
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
//             Node* dlt=tail;
//             tail=tail->pre;
//             delete dlt;
//             if (tail==NULL)
//             {
//                 head=NULL;
//                 return;
//             }
//             tail->next=NULL;
//         }
//         int top(){
//             return tail->val;
//         }
//         int size(){
//                 return sz;
//             }
//         int empty(){
//             return head==NULL;
//         }
// };
// class Myqueue{
//     public:
//     Node* head=NULL;
//     Node* tail=NULL;
//     int sz=0;
//         void push(int val){
//             sz++;
//             Node* newnode=new Node (val);
//             if (head==NULL)
//             {
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
//             Node* dlt=head;
//             head=head->next;
//             delete dlt;
//             if(head==NULL){
//                 tail=NULL;
//                 return;
//             }
//             head->pre=NULL;
//         }
//         int front(){
//             return head->val;
//         }
//         int size(){
//                 return sz;
//             }
//         int empty(){
//             return head==NULL;
//         }
// };
// int main(){
//     int t;cin>>t;
//     Mystack s;
//         while (t--)
//         {
//             int val;
//             cin>>val;
//             s.push(val);
//         }
//         while (!s.empty())
//         {
//             cout<<s.top()<<" ";
//             s.pop();
//         }
//             cout<<endl;
//     int x;cin>>x;
//     Myqueue q;
//         while (x--)
//         {
//             int val;
//             cin>>val;
//             q.push(val);
//         }
//         while (!q.empty())
//         {
//             cout<<q.front()<<" ";
//             q.pop();
//         }
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
//         Node* head=NULL;
//         Node* tail=NULL;
//         int sz=0;
//             void push(int val){
//                 sz++;
//                 Node* newnode=new Node(val);
//                 if (head==NULL)
//                 {
//                     head=newnode;
//                     tail=newnode;
//                     return;
//                 }
//                 tail->next=newnode;
//                 newnode->pre=tail;
//                 tail=newnode;
//             }
//             //this pop is for stack;
//             void pop(){
//                 size--;
//                 Node* dltnode=tail;
//                 tail=tail->pre;
//                 delete dltnode;
//                 if (tail==NULL)
//                 {
//                     head=NULL;
//                     return;
//                 }
//                 tail->next=NULL;
//             }
//             // this pop is for queue;
//             // void pop(){
//             //     Node* dltnode=head;
//             //     head=head->next;
//             //     delete dltnode;
//             //     if (head==NULL)
//             //     {
//             //         tail=NULL;
//             //         return;
//             //     }
//             //     head->pre=NULL;
//             // }
//             int size(){
//                 return sz;
//             }
//             //for stack we will use top;as stack follows LIFO;
//             int top(){
//                 return tail->val;
//             }
//             //for queue we will use front;as queue follows FIFO;
//             int front(){
//                 return head->val;
//             }
//             //we wont be using it in stack as we cant access stack from
//             //behind...only we can do it using queue;
//             int back(){
//                 return tail->val;
//             }
//             bool empty(){
//                 if (head==NULL)
//                     return true;
//                 else 
//                     return false;   
//             }
//             //if we want to save time then we can use,
//             // return head==NULL;
// };
// int main(){
//     int t;
//     cin>>t;
//         myStack s;
//         int n;
//         cin>>n;
//         for (int i = 0; i < n; i++)
//         {
//             int val;
//             cin>>val;
//             s.push(val);
//         }
//         while (!s.empty())
//         {
//             cout<<s.top()<<" ";
//             s.pop();
//         }
//         cout<<endl;
//         myStack s2;
//         while (!s.empty())
//         {
//             int val;
//             val=s.top();
//             s.pop();
//             s2.push(val);
//         }
//         if (s=s2)
//             cout<<"YES"<<endl;
//         else cout<<"NO"<<endl;
//         cout<<endl;
        
    
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
//         Node* head=NULL;
//         Node* tail=NULL;
//             void push(int val){
//                 Node* newnode=new Node(val);
//                 if (head==NULL){
//                     head=newnode;
//                     tail=newnode;
//                     return;
//                 }
//                 tail->next=newnode;
//                 newnode->pre=tail;
//                 tail=newnode;
//             }
//             void pop(){
//                 Node* dltnode=tail;
//                 tail=tail->pre;
//                 delete dltnode;
//                 if (tail==NULL){
//                     head=NULL;
//                     return;
//                 }
//                 tail->next=NULL;
//             }
//             int top(){
//                 return tail->val;
//             }
//             bool empty(){
//                 return head==NULL;
//             }
// };
// int main(){
//     myStack s;
//     int n;
//     cin>>n;
//     for (int i = 0; i < n; i++)
//     {
//         int val;
//         cin>>val;
//         s.push(val);
//     }
//     myStack s2;
//     int m;
//     cin>>m;
//     for (int i = 0; i < m; i++)
//     {
//         int val;
//         cin>>val;
//         s2.push(val);
//     }
//     if (n!=m)
//     {
//         cout<<"NO"<<endl;
//     }
//     else{
//         int flag=1;
//         while (!s.empty())
//         {
//             if (s.top()!=s2.top())
//             {
//                 flag=0;
//             }
//             s.pop();
//             s2.pop();
//         }
//         if (flag==1)
//         cout<<"YES"<<endl;
//         else cout<<"NO"<<endl;
        
//     }
    
//     return 0;
// }






// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     queue<int> q;
//     int t;
//     cin>>t;
//     for (int i = 0; i < t; i++)
//     {
//         int val;
//         cin>>val;
//         q.push(val);
//     }
//     queue<int> q2;
//     int n;
//     cin>>n;
//     for (int i = 0; i < n; i++)
//     {
//         int val;
//         cin>>val;
//         q2.push(val);
//     }
//     if (t!=n)
//     {
//         cout<<"NO"<<endl;
//     }
    
//     return 0;
// }


// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     stack<int> s;
//     int n;
//     cin>>n;
//     for (int i = 0; i < n; i++)
//     {
//         int val;
//         cin>>val;
//         s.push(val);
//     }
//     stack<int> s2;
//     while (!s.empty())
//     {
//         int val;
//         val=s.top();
//         s.pop();
//         s2.push(val);
//     }
//     for (int i = 0; i < n; i++)
//     {
//         cout<<s2.top()<<" ";
//         s2.pop();
//     }
//     return 0;
// }


// #include <bits/stdc++.h>
// using namespace std;

// class Node {
// public:
//     Node* pre;
//     int val;
//     Node* next;
//     Node(int val) {
//         this->pre = NULL;
//         this->val = val;
//         this->next = NULL;
//     }
// };

// class myQueue {
// public:
//     Node* head = NULL;
//     Node* tail = NULL;
//     int sz = 0;

//     void push(int val) {
//         sz++;
//         Node* newnode = new Node(val);
//         if (head == NULL) {
//             head = newnode;
//             tail = newnode;
//             return;
//         }
//         tail->next = newnode;
//         newnode->pre = tail;
//         tail = newnode;
//     }

//     void pop() {
//         if (head == NULL) return; // Prevent popping from an empty queue
//         sz--;
//         Node* dltnode = head;
//         head = head->next;
//         delete dltnode;
//         if (head == NULL) { // Update tail when the queue becomes empty
//             tail = NULL;
//             return;
//         }
//         head->pre = NULL;
//     }

//     int size() {
//         return sz;
//     }

//     int front() {
//         return head->val;
//     }

//     bool empty() {
//         return head == NULL;
//     }
// };

// class myStack {
// public:
//     Node* head = NULL;
//     Node* tail = NULL;
//     int sz = 0;

//     void push(int val) {
//         sz++;
//         Node* newnode = new Node(val);
//         if (head == NULL) {
//             head = newnode;
//             tail = newnode;
//             return;
//         }
//         tail->next = newnode;
//         newnode->pre = tail;
//         tail = newnode;
//     }

//     void pop() {
//         if (tail == NULL) return; // Prevent popping from an empty stack
//         sz--;
//         Node* dltnode = tail;
//         tail = tail->pre;
//         delete dltnode;
//         if (tail == NULL) { // Update head when the stack becomes empty
//             head = NULL;
//             return;
//         }
//         tail->next = NULL;
//     }

//     int top() {
//         return tail->val;
//     }

//     int size() {
//         return sz;
//     }

//     bool empty() {
//         return head == NULL;
//     }
// };

// int main() {
//     myStack s;
//     int t, n;
//     cin >> t >> n;

//     // Push elements into the stack
//     for (int i = 0; i < t; i++) {
//         int val;
//         cin >> val;
//         s.push(val);
//     }

//     myQueue q;

//     // Push elements into the queue
//     for (int i = 0; i < n; i++) {
//         int val;
//         cin >> val;
//         q.push(val);
//     }

//     if (s.size() != q.size()) {
//         cout << "NO" << endl;
//     } else {
//         int flag = 1;
//         while (!s.empty()) {
//             if (s.top() != q.front()) {
//                 flag = 0;
//                 break;
//             }
//             s.pop();
//             q.pop();
//         }
//         if (flag == 1)
//             cout << "YES" << endl;
//         else
//             cout << "NO" << endl;
//     }

//     return 0;
// }
// #include <iostream>
// #include <stack>
// using namespace std;

// int main() {
//     int t;
//     cin >> t; // Number of test cases

//     while (t--) {
//         string str;
//         cin >> str;

//         stack<char> s; // Stack to process the string

//         for (char ch : str) {
//             if (!s.empty() && s.top() != ch) { 
//                 // If the stack is not empty and the top is different from the current character
//                 s.pop(); // Remove the top character (pair is found)
//             } else {
//                 // Otherwise, push the current character
//                 s.push(ch);
//             }
//         }

//         // If the stack is empty, the string is valid
//         if (s.empty())
//             cout << "YES" << endl;
//         else
//             cout << "NO" << endl;
//     }

//     return 0;
// }
// #include <iostream>
// #include <queue>
// #include <string>
// using namespace std;

// int main() {
//     int q; // Number of queries
//     cin >> q;
    
//     queue<string> line; // Queue to represent the ticket counter line
    
//     while (q--) {
//         int command;
//         cin >> command; // Read the command
        
//         if (command == 0) {
//             string name;
//             cin >> name; // Read the name of the person joining the line
//             line.push(name);
//         } 
//         else if (command == 1) {
//             if (!line.empty()) {
//                 // Print and remove the person at the front of the queue
//                 cout << line.front() << endl;
//                 line.pop();
//             } else {
//                 // If no one is in the line
//                 cout << "Invalid" << endl;
//             }
//         }
//     }
    
//     return 0;
// }


// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int t; // টেস্ট কেস সংখ্যা
//     cin >> t;

//     while (t--) {
//         string s; 
//         cin >> s;

//         stack<char> stk; // স্ট্যাক ডিক্লেয়ার করা হলো

//         for (char ch : s) {
//             if (!stk.empty() && ((stk.top() == '0' && ch == '1') || (stk.top() == '1' && ch == '0'))) {
//                 // যদি স্ট্যাক খালি না থাকে এবং শীর্ষে থাকা সংখ্যা এবং বর্তমান সংখ্যার মধ্যে 0 এবং 1 থাকে:
//                 stk.pop(); // মুছে ফেলো
//             } else {
//                 stk.push(ch); // অন্যথায় বর্তমান সংখ্যাটি স্ট্যাকে যোগ করো
//             }
//         }

//         if (stk.empty()) {
//             cout << "YES" << endl; // স্ট্যাক খালি থাকলে, আউটপুট "YES"
//         } else {
//             cout << "NO" << endl; // স্ট্যাক খালি না থাকলে, আউটপুট "NO"
//         }
//     }

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
class Myqueue{
    public:
    Node* head=NULL;
    Node* tail=NULL;
    int sz=0;
        void push(int val){
            sz++;
            Node* newnode=new Node(val);
            if (head==NULL)
            {
                head=newnode;
                tail=newnode;
                return;
            }
            tail->next=newnode;
            newnode->pre=newnode;
            tail=newnode;
        }
        void pop(){
            sz--;
            Node* dltnode=head;
            head=head->next;
            delete dltnode;
            if (head==NULL)
            {
                tail=NULL;
                return;
            }
            head->pre=NULL;
        }
        int front(){
            return head->val;
        }
        int size(){
            return sz;
        }
        bool empty(){
            return head==NULL;
        }
};
class Mystack{
    public:
    Node* head=NULL;
    Node* tail=NULL;
    int sz=0;
        void push(int val){
            Node* newnode=new Node(val);
            if (head==NULL)
            {
                head=newnode;
                tail=newnode;
                return;
            }
            tail->next=newnode;
            tail->pre=newnode;
            tail=newnode;
        }
        void pop(){
            Node* dltnode=head;
            head=head->next;
            delete dltnode;
            if (head==NULL)
            {
                tail=NULL;
                return;
            }
            head->pre=NULL;
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
int main(){
    int t;
    cin>>t;
    Myqueue q;
    while (t--)
    {
        int val;
        cin>>val;
        q.push(val);
    }

    return 0;
}
