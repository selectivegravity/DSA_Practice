#include<bits/stdc++.h>
using namespace std;

class node {
    public:
    int data;
    node* left;
    node* right;

    //constructor...
    node(int val){
        data=val;
        left=NULL;
        right=NULL;
    }
};

void CountNodes(node* root){
    queue <node*> q;
    q.push(root);
    q.push(NULL);
    int count=0;
    int sum=0;
    while(!q.empty()){
        node* Node=q.front();
        q.pop();
        if(Node!=NULL){
            sum+=Node->data;
            count++;
            if(Node->left!=NULL){
                q.push(Node->left);
            }
            if(Node->right!=NULL){
                q.push(Node->right);
            }
        }
        else if(!q.empty()){
            q.push(NULL);
        }
    }
    cout<<count<<endl;
    cout<<sum<<endl;
}

int recurrcount(node* root){
    if(root==NULL){
        return 0;
    }
    return recurrcount(root->left) + recurrcount(root->right) + 1;  // +1 is for counting the courrent node...
}

int recurrsum(node* root){
    if(root==NULL){
        return 0;
    }
    return recurrsum(root->left) + recurrsum(root->right) + root->data;  // +1 is for counting the courrent node...
}

int heightTree(node* root){
    if(root==NULL){
        return 0;
    }

    return max(heightTree(root->left),heightTree(root->right)) +1;
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
    //CountNodes(root);
    cout<<recurrcount(root)<<endl;
    cout<<recurrsum(root)<<endl;
    cout<<heightTree(root)<<endl;
    return 0;
}