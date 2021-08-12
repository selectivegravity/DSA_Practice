#include<bits/stdc++.h>
using namespace std;

class node {
    public:
    int data;
    node* left;
    node* right;

    // contructor..
    node(int val){
        data=val;
        left=NULL;
        right=NULL;
    }
};

void levelOrder(node* root){
    if(root==NULL){
        return ;
    }
    queue <node*> q;
    q.push(root);
    q.push(NULL);
    while(!q.empty()){
        node* Node=q.front();
        q.pop();
        if(Node!=NULL){
            cout<<Node->data<<" ";
            if(Node->left!=NULL){
                q.push(Node->left);
            }
            if(Node->right!=NULL){
                q.push(Node->right);
            }
        }
        else if(!q.empty()){
            q.push(NULL);
        }
    }
}
int main(){
    node* root=new node(1);
    root->left=new node(2);
    root->right=new node(3);
    root->left->left=new node(4);
    root->left->right=new node(5);
    root->right->left=new node(6);
    root->right->right=new node (7);
    root->right->right->left=new node(20);
    root->right->left->right=new node (30);
    levelOrder(root);
    return 0;
}