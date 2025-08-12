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
//         //preorder traversal
// void preorder(Node* root){
//     if (root==NULL)
//         return;
//     cout<<root->val<<" ";
//     preorder(root->left);
//     preorder(root->right);
// }
//         //inorder traversal
// void inorder(Node* root){
//     if(root==NULL)
//         return;
//     inorder(root->left);
//     cout<<root->val<<" ";
//     inorder(root->right);
// }
//         //postorder traversal
// void postorder(Node* root){
//     if(root==NULL)
//         return;
//     postorder(root->left);
//     postorder(root->right);
//     cout<<root->val<<" ";
// }
        //level order traversal
void lever_order(Node* root){
    if (root==NULL)
    {
        cout<<"No Tree"<<endl;
        return;
    }
    queue<Node*> q;
    q.push(root);
    while (!q.empty())
    {
        Node* f=q.front();
        q.pop();
        cout<<f->val<<" ";
        if(f->left)
            q.push(f->left);
        if(f->right)
            q.push(f->right);
    }
}
int main(){
    Node* root=new Node(10);
    Node* a=new Node(20);
    Node* b=new Node(30);
    Node* c=new Node(40);
    Node* d=new Node(50);
    Node* e=new Node(60);
    root->left=a;
    root->right=b;
    a->left=c;
    b->left=d;
    b->right=e;
    // preorder(root);
    // cout<<endl;
    // inorder(root);
    // cout<<endl;
    // postorder(root);
    lever_order(root);
    return 0;
}