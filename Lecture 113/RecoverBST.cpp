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

void RecoverBST(node* head,node* prev,node* &first,node* &last){
    if(head==NULL){
        return;
    }

    RecoverBST(head->left,prev,first,last);
    //cout<<head->data<<" ";
    if(prev!=NULL){
        if(prev->data>head->data){
            if(first==NULL){
                first=head;
            }
            else if(last==NULL){
                last=head;
            }
            prev=head;
        }
        else{
            prev=head;
        }
    }
    else{
        prev=head;
    }
    RecoverBST(head->right,prev,first,last);
}

void print(node* root){
    if(root==NULL){
        return ;
    }
    print(root->left);
    cout<<root->data<<" ";
    print(root->right);
}

int main(){
    node* root = new node(4);
    root->left=new node(2);
    root->right =new node(7);
    root->left->left=new node(1);
    root->right->right=new node(8);
    //root->left->right->left=new node(6);
    node* first=NULL;
    node* last=NULL;
    RecoverBST(root,NULL,first,last);
    cout<<endl;
    cout<<first->data<<" ";
    cout<<last->data<<" ";
    //print(root);
    return 0;
}