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

bool identityofBST(node* root1,node* root2){
    if(root1==NULL || root2==NULL){
        return root1==root2;
    }
    // We are comparing data for structurally identical and exactly BST...
    // We need not compare data for only structurally identical BST... 
    if(root1->data==root2->data){
        if(identityofBST(root1->left,root2->left) && identityofBST(root1->right,root2->right)){
            return true;
        }
        else{
            return false;
        }
    }
    else{
        return false;
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
    node* voot = new node(1);
    voot->left=new node(2);
    voot->right=new node(3);
    voot->left->right=new node(4);
    voot->right->right=new node(5);
    voot->right->right->left=new node(1);
    voot->right->right->right= new node(2);
    voot->left->right->left=new node(6);
    voot->left->right->right=new node(7);
    cout<<identityofBST(root,voot);
    return 0;
}