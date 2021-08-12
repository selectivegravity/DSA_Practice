#include<bits/stdc++.h>
using namespace std;

class node{
    public:
    int data;
    node *left,*right;

    node(int val){
        data=val;
        left=right=NULL;
    }
};

map <int , vector<int>> m;

void vertical_order(node* root,int distance){
    if(root==NULL){
        return ;
    }
    m[distance].push_back(root->data);
    vertical_order(root->left,distance-1);
    vertical_order(root->right,distance+1);
}

int main(){
    node* root=new node(10);
    root->left=new node(7);
    root->right=new node(4);
    root->left->left=new node(3);
    root->left->right=new node(11);
    root->right->right=new node(6);
    root->right->left=new node(14);
    vertical_order(root,0);
    map <int,vector<int>>:: iterator it;
    for(it=m.begin();it!=m.end();it++){
        cout<<it->first<<" ";
        for(int i=0;i<(it->second).size();i++){
            cout<<(it->second)[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}