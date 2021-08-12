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

int main(){
    int preorder[6]={7,5,4,6,8,9};
    int preorderidx=0;
    node* root=BST_preorder(preorder,&preorderidx,preorder[0],INT16_MIN,INT16_MAX,6);
    printBST(root);
    return 0;
}