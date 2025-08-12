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
Node *inp(){
    int val;
    cin>>val;
    Node *root;
    if(val==-1)
        root=NULL;
    else root=new Node(val);
    queue<Node*> q;
    if(root!=NULL)
        q.push(root);
    while(!q.empty()){
        Node* p=q.front();
        q.pop();
        int l,r;
        cin>>l>>r;
        Node *lft,*rght;
        if(l==-1)
            lft=NULL;
        else lft=new Node(l);
        if(r==-1)
            rght=NULL;
        else rght=new Node(r);
        p->left=lft;
        p->right=rght;
        if(p->left!=NULL)
            q.push(p->left);
        if(p->right!=NULL)
            q.push(p->right);
    }
    return root;
}
//for showing result we are using level order
void level_order(Node *root){
    queue<Node*> q;
    q.push(root);
    while (!q.empty())
    {
        Node* p=q.front();
        q.pop();
        cout<<p->val<<" ";
        if(p->left)
            q.push(p->left);
        if(p->right)
            q.push(p->right);
    }
}
void insert(Node *&root,int val){
    if(root==NULL)
        root=new Node(val);
        if(val<root->val){
            if(root->left==NULL)
                 root->left=new Node(val);
            else insert(root->left,val);
        }
        else{
            if(root->right==NULL)
                root->right=new Node(val);
            else insert(root->right,val);
        }
}
void insert(Node *root,int val){
    if(root==NULL)
        root=new Node(val);
        if(val<root->val){
            if(root->left)
        }
}
int main(){
    Node *root=inp();
    int val;
    cin>>val;
    insert(root,val);
    level_order(root);
    return 0;
}
