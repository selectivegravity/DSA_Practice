#include<iostream>
using namespace std;

class node {
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

int search(int inorder[],int curr,int start,int end){
    for(int i=start;i<=end;i++){
        if(curr==inorder[i]){
            return i;
        }
    }
    return -1;
}

void inorder(node* root){
    if(root==NULL){
        return;
    }
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}

node* buildtree(int preorder[],int inorder[],int start,int end){

    if(start>end){
        return NULL;
    }

    static int idx=0;
    int curr=preorder[idx];
    node* Node=new node(curr);
    idx++;

    if(start==end){
        return Node;
    }

    int pos=search(inorder,curr,start,end);
    Node->left=buildtree(preorder,inorder,start,pos-1);
    Node->right=buildtree(preorder,inorder,pos+1,end);
    return Node;
}

int main(){
    int pre[]={1,2,4,3,5};
    int in[]={4,2,1,5,3};
    node* root=buildtree(pre,in,0,4);
    inorder(root);
    return 0;
}