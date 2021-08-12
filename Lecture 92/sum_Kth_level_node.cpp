#include<bits/stdc++.h>
using namespace std;

class node {
    public:
    int data;
    node* left;
    node* right;

    // contructor..
    node(int val){
        data=val;
        left=NULL;
        right=NULL;
    }
};

int levelOrder(node* root,int K){
    queue <node*> q;
    q.push(root);
    q.push(NULL);
    int level=0;
    int level_sum=0;
    while(!q.empty()){
        node* Node=q.front();
        q.pop();
        if(Node!=NULL){
            level_sum+=Node->data;
            if(Node->left!=NULL){
                q.push(Node->left);
            }
            if(Node->right!=NULL){
                q.push(Node->right);
            }
        }
        else{
            if(level==K){
                return level_sum;
            }
            q.push(NULL);
            level++;
            level_sum=0;
        }
    }
    return -1;
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
    cout<<levelOrder(root,2);
    return 0;
}