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
int main(){
    Node a(10),b(20),c(330);
    a.next=&b;
    b.next=&c;
    cout<<a.val<<endl;
    cout<<a.next->val<<endl;
    cout<<a.next->next->val<<endl;
    return 0;
}
// #include <bits/stdc++.h>
// using namespace std; 
// class Node{
//    public:
//         int val;
//         Node* next;
// };
// int main(){
//     Node a,b,c;
//     cin>>a.val>>b.val>>c.val;
//     a.next=&b;
//     b.next=&c;
//     c.next=NULL;
//     cout<<a.val<<endl;
//     //rpinting next value
//     cout<<(*a.next).val<<endl;
// //accessing value from previous one
//     cout<<a.next->val<<endl;
//     //arrow technique
//     cout<<a.next->next->val<<endl;
//     return 0;
// }
