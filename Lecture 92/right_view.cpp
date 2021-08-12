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

void right_view(node* head){
    cout<<1<<endl;
    if(head==NULL){
        return;
    }
    queue <node*> q1;
    //queue <node*> q2;
    q1.push(head);
    q1.push(NULL);
    while(!q1.empty()){
        node* Node =  q1.front ();
        //q2.push(Node);
        q1.pop();
        if(q1.front()==NULL && Node!=NULL){
            cout<<Node->data<<" ";
        }
        if(Node!=NULL){
            if(Node->left!=NULL){
                q1.push(Node->left);
            }
            if(Node->right!=NULL){
                q1.push(Node->right);
            }
        }
        else if(!q1.empty()){
            q1.push(NULL);
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
    right_view(root);
    return 0;
}