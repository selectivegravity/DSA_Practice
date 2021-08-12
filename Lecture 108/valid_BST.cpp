#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node* left;
    node* right;

    //conturctor...

    node(int val){
        data=val;
        left=NULL;
        right=NULL;
    }
};

node* BST_preorder(int preorder[],int* preorderidx, int key, int min,int max, int n){
    //base case...
    if(*preorderidx>=n){
        return NULL;
    }
    node* root=NULL;
    if(key>min && key<max){
        root= new node(key);
        *preorderidx=*preorderidx+1;
        if(*preorderidx<n){
            root->left=BST_preorder(preorder,preorderidx,preorder[*preorderidx],min,key,n);
        }
        if(*preorderidx<n){
            root->right=BST_preorder(preorder,preorderidx,preorder[*preorderidx],key,max,n);
        }
    }
    return root;
}

void printBST(node* head){
    if(head==NULL){
        return;
    }
    printBST(head->left);
    cout<<head->data<<" ";
    printBST(head->right);
}
/* 
int maximum(node* head){
    if(head==NULL){
        return 0;
    }
    int med=max(maximum(head->right),maximum(head->left));
    return max(med,head->data);
}

int minimum(node* head){
    if(head==NULL){
        return INT16_MAX;
    }
    int med=min(minimum(head->right),minimum(head->left));
    return min(med,head->data);
} */

bool IsSubtreeGreater(node* root,int value){
    if(root==NULL) return true;
    if(root->data >value && IsSubtreeGreater(root->left,value) && IsSubtreeGreater(root->right,value)){
        return true;
    }
    else{
        return false;
    }
}

bool IsSubtreelesser(node* root,int value){
    if(root==NULL) return true;
    if(root->data < value && IsSubtreeGreater(root->left,value) && IsSubtreeGreater(root->right,value)){
        return true;
    }
    else{
        return false;
    }
}

bool valid_bst(node* root){
    if(root==NULL){
        return true;
    }
    //int maxL=maximum(root->left);
    //int minR=minimum(root->right);
    if(/* maxL < root->data < minR  */IsSubtreeGreater(root->right,root->data) && IsSubtreelesser(root->left,root->data) && valid_bst(root->left) && valid_bst(root->right)){
        return true;
    }
    else{
        return false;
    }
}

int main(){
    node* root=new node(1);
    root->left=new node(2);
    root->right=new node(3);
    root->left->left=new node(4);
    root->left->right=new node(5);
    root->right->left=new node(100);
    root->right->right=new node (7);
    root->right->right->left=new node(20);
    root->right->left->right=new node (30);
    //cout<<maximum(root)<<" "<<minimum(root);
    cout<<valid_bst(root);
    return 0;
}