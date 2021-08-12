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

node* balancedBST(int arr[],int start,int end){
    if(start>end){
        return NULL;
    }
    int mid=(end+start)/2;
    node* curr_node=new node(arr[mid]);
    curr_node->left=balancedBST(arr,start,mid-1);
    curr_node->right=balancedBST(arr,mid+1,end);
    return curr_node;
}

void print_tree(node* root){
    if(root==NULL){
        return;
    }
    print_tree(root->left);
    cout<<root->data<<" ";
    print_tree(root->right);
}

int main(){
    int arr[3]={1,2,3};
    node* root=balancedBST(arr,0,2);
    print_tree(root);
    return 0;
}