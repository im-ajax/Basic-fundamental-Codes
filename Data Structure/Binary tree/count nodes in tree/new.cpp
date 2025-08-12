            //countnodes in tree

#include <bits/stdc++.h>
using namespace std;
class Node{
    public:
        int val;
        Node* left;
        Node* right;
    Node(int val){
        this->val=val;
        this->left=NULL;
        this->right=NULL;
    }
};
// Node* input(){
//     int val;
//     cin>>val;
//     Node* root;
//     if(val==-1)
//         root=NULL;
//     else root=new Node(val);
//     queue<Node*> q;
//     if(root)
//         q.push(root);
//     while (!q.empty())
//     {
//         Node* p=q.front();
//         q.pop();
//         int l,r;
//         cin>>l>>r;
//         Node *mylft,*myrght;
//         if(l==-1)
//             mylft=NULL;
//         else mylft=new Node(l);
//         if(r==-1) 
//             myrght=NULL;
//         else myrght=new Node(r);
//         p->left=mylft;
//         p->right=myrght;
//         if(p->left)
//             q.push(p->left);
//         if(p->right)
//             q.push(p->right);
//     }
//     return root;
// }
// int countnode(Node* root){
//     if(root==NULL)
//         return 0;
//     int l=countnode(root->left);
//     int r=countnode(root->right);
//     return l+r+1;
// }
// int countnode(Node *root){
//     if(root==NULL)
//         return 0;
//     queue<Node*> q;
//     q.push(root);
//     int cnt=0;
//     while (!q.empty())
//     {
//         Node *p=q.front();
//         q.pop();
//         cnt++;
//         if(root->left)q.push(root->left);
//         if(root->right)q.push(root->right);
//     }
//     return cnt;
// }
// int main(){
//     Node* root=input();
//     cout<<countnode(root);
//     return 0;
// }

            //count leaf nodes

// #include <bits/stdc++.h>
// using namespace std;
// class Node{
//     public:
//         int val;
//         Node* left;
//         Node* right;
//     Node(int val){
//         this->val=val;
//         this->left=NULL;
//         this->right=NULL;
//     }
// };
// Node *input(){
//     int val;
//     cin>>val;
//     Node* root;
//     if (val==-1)
//         root=NULL;
//     else root=new Node(val);
//     queue<Node*> q;
//     if(root)
//         q.push(root);
//     while (!q.empty())
//     {
//         Node* p=q.front();
//         q.pop();
//         int l,r;
//         cin>>l>>r;
//         Node* myleft,*myright;
//         if(l==-1)
//             myleft=NULL;
//         else myleft=new Node(l);
//         if(r==-1)
//             myright=NULL;
//         else myright=new Node(r);
//         p->left=myleft;
//         p->right=myright;
//         if(p->left)
//             q.push(p->left);
//         if(p->right)
//             q.push(p->right);
//     }
//     return root;
// }
// int countleaf(Node *root){
//     if(root==NULL)
//         return 0;
//     if(root->left==NULL&&root->right==NULL)
//         return 1;
//         int l=countleaf(root->left);
//         int r=countleaf(root->right);
//         return l+r;
// }
// int main(){
//     Node *root=input();
//     cout<<countleaf(root);
//     return 0;
// }
