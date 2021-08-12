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

// By Urvi dii...
node* BST_insert(node* root,int val){
    if(root==NULL){
        node* element=new node(val);
        return element;
    }
    if(val<root->data){
        root->left=BST_insert(root->left,val);
    }
    else{
        root->right=BST_insert(root->right,val);
    }
    return root;
}

//By Urvi Dii...
/* node* BST_search(node* head,int key){
    if(head==NULL){
        return NULL;
    }
    if(head->data==key){
        return head;
    }
    if(head->data>key){
        return BST_search(head->left,key);
    }
    return BST_search(head->right,key);
} */

// By me ...
node* BST_search(node* head,int key){
    if(head==NULL){
        return NULL;
    }
    if(head->data==key){
        return head;
    }
    if(head->data>key){
        BST_search(head->left,key);
    }
    else{ 
        BST_search(head->right,key);
    }
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
    node* place_ptr=BST_search(root,1);
    cout<<place_ptr->right->data;
    return 0;
}