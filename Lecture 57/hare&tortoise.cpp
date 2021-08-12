#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node* next;        // next stores address of next node...

    node(int value){   // constructor 
        data=value;
        next=NULL;
    }
};

void insertAtTail(node* &head,int value){
    node* n= new node(value);
    if(head==NULL){
        head=n;
        return;
    }
    node* temp=head;
    while(temp->next!=NULL){
        temp=temp->next;        
    }
    temp->next=n;  
}

void display(node* head){
    node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

void makecycle(node* &head,int pos){
    node* temp=head;
    int count =1;
    node* startnode;
    while(temp->next!=NULL){
        temp=temp->next;
        count++;
        if(count==pos){
            startnode=temp;
        }
    }
    temp->next=startnode;
}

bool checkcycle(node* head){
    node* slow=head;
    node* fast=head;
    while(fast!=NULL && fast->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;
        if(fast==slow){
            return true;
        }
    }
    return false;
}

int main(){
    node* head=NULL;
    insertAtTail(head,1);
    insertAtTail(head,2);
    insertAtTail(head,3);
    insertAtTail(head,4);
    insertAtTail(head,5);
    insertAtTail(head,6);
    makecycle(head,3);
    cout<<checkcycle(head)<<endl;
    display(head);
    return 0;
}