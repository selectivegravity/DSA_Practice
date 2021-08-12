#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node* left;
    node* right;

    // constructor...
    node(int value){
        data=value;
        left=NULL;
        right=NULL;
    }
};

int search(int in[],int start, int end, int current){
    for(int i=start;i<=end;i++){
        if(current==in[i]){
            return i;
        }
    }
    return -1;
}

node* buildTree(int post[],int inorder[],int start,int end){

    //base case

    if(start>end){
        return NULL;
    }

    static int idx =4;
    int curr = post[idx];
    node* Node = new node(curr);
    idx--;

    if(start==end){
        return Node;
    }

    int pos = search(inorder,start,end,curr);
    Node->right=buildTree(post,inorder,pos+1,end);
    Node->left=buildTree(post,inorder,start,pos-1);

    return Node;
}

void InorderPrint(node* root){
    if(root==NULL){
        return;
    }

    InorderPrint(root->left);
    cout<<root->data<<" ";
    InorderPrint(root->right);
}
int main(){

    int post[]={4,2,5,3,1};
    int inorder[]={4,2,1,5,3};
    node *root=buildTree(post,inorder,0,4);
    InorderPrint(root);
    return 0;
}