#include <bits/stdc++.h>
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

// By Me...
void BST_insert(node* &root, int val){
    if(root==NULL){
        return ;
    }
    node* element=new node(val);
    if(val>root->data){
        if(root->right==NULL){
            root->right=element;
            return;
        }
        BST_insert(root->right,val);
    }
    else if (val<root->data){
        if(root->left==NULL){
            root->left=element;
            return;
        }
        BST_insert(root->left,val);
    }
}

int height(node* root){
    if(root==NULL){
        return 0;
    }
    return max(height(root->left),height(root->right)) + 1;
}

bool balanced(node* root){
    if(root==NULL){
        return true;
    }
    int lh=height(root->left);
    int rh=height(root->right);
    if(abs(lh-rh)<=1 && balanced(root->left) && balanced(root->right)){
        return true;
    }
    return false;
}
void print_tree(node* head){
    node* root= head;
    if(root==NULL){
        return;
    }

    print_tree(root->left);
    cout<<root->data<<" ";
    print_tree(root->right);
}

int main(){
    int arr[6]={5,1,3,4,2,7};
    node* root;
    for(int i=0;i<6;i++){
        if(i==0){
            root= new node(arr[i]);
        }
        else{
            BST_insert(root,arr[i]);
        }
    }
    //print_tree(root);
    cout<<balanced(root)<<endl;
    return 0;
}