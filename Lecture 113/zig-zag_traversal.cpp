#include<bits/stdc++.h>
using namespace std;

class node {
    public:
    int data;
    node* left;
    node* right;;

    //constructor...
    node(int val){
        data=val;
        left=NULL;
        right=NULL;
    }
};

void zigzag(node* root){
    queue <node*> q;
    q.push(root);
    if(root!=NULL) {cout<<root->data<<" ";}
    q.push(NULL);
    while(!q.empty()){
        node* Node = q.front();
        q.pop();
        int count=0;
        if(Node!=NULL){
            //cout<<Node->data<<" ";
            if(Node->left!=NULL){
                //cout<<Node->left->data<<" ";
                q.push(Node->left);
            }
            if(Node->right!=NULL){
                //cout<<Node->right->data<<" ";
                q.push(Node->right);
            }
            if(count!=0){
                if(Node->left!=0){cout<<Node->left->data<<" ";}
                if(Node->right!=0){cout<<Node->right->data<<" ";}
            }
            if(count==0){
                if(Node->right!=0){cout<<Node->right->data<<" ";}
                if(Node->left!=0){cout<<Node->left->data<<" ";}
            }
        }
        if(Node==NULL && !q.empty()){
            q.push(NULL);
            count++;
        }
    }
}

int main(){
    node* root = new node(1);
    root->left=new node(2);
    root->right=new node(3);
    root->left->right=new node(4);
    root->right->right=new node(5);
    root->right->right->left=new node(1);
    root->right->right->right= new node(2);
    root->left->right->left=new node(6);
    root->left->right->right=new node(7);
    zigzag(root);
    return 0;
}