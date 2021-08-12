#include<bits/stdc++.h>
using namespace std;

class node{
    public:
    int data;
    node* left;
    node* right;

    node(int val){
        data=val;
        left=NULL;
        right=NULL;
    }
};

void left_view(node* head){
    queue <node*> q;
    q.push(head);
    q.push(NULL);
    int count=0;
    while(!q.empty()){
        node* Node = q.front();
        q.pop();
        if(Node!=NULL){
            if(count==0){
                cout<<Node->data<<" ";
            }
            if(Node->left!=NULL){
                q.push(Node->left);
            }
            if(Node->right!=NULL){
                q.push(Node->right);
            }
            count++;
        }
        else if(!q.empty()){
            q.push(NULL);
            count=0;
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
    //root->left->left->left->left=new node(50);
    left_view(root);
    return 0;
}