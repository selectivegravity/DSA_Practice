#include<iostream>
using namespace std;

class node{
    public:
    node* previous;
    int data;
    node* next;

    node(int value){
        data=value;
        previous=NULL;
        next=NULL;
    }
};

void insertAtHead(node* &head,int value){
    node* n=new node(value);
    if(head==NULL){
        head=n;
        return;
    }
    head->previous=n;
    n->next=head;
    head=n;
}

void insertAtTail(node* &head,int value){
    node* n=new node(value);

    if(head==NULL){
        head=n;
        return;
    }

    node* temp=head;
    while(temp->next!=NULL){            // we''ll stop at temp
        temp=temp->next;
    }
    temp->next=n;
    n->previous=temp;
}

void display(node* head){
    node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

void deleteAtHead(node* &head){
    node* todelete=head;
    head=head->next;
    head->previous=NULL;
    delete todelete;
}

void deletion(node* &head,int pos){
    if(pos==1){
        deleteAtHead(head);
        return;
    }
    node* temp=head;
    int count=1;
    while(temp!=NULL && count<pos){
        temp=temp->next;
        count++;
    }
    node* todelete=temp;
    if(temp->next!=NULL){
        temp->next->previous=temp->previous;
    }
    temp->previous->next=temp->next;
    delete todelete;
}

int main(){
    node* head=NULL;
    insertAtTail(head,1);
    insertAtTail(head,2);
    insertAtTail(head,3);
    insertAtTail(head,4);
    insertAtTail(head,5);
    insertAtTail(head,6);
    insertAtHead(head,7);
    deletion(head,1);
    display(head);
    return 0;
}