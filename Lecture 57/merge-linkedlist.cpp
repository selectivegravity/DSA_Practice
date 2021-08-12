#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node* next;

    node(int value){
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

node* merge(node* &head1,node* &head2){
    node* ptr1=head1;
    node* ptr2=head2;
    node* dummynode=new node(-1);     // its a node not a pointer
    node* ptr3=dummynode;
    while(ptr1!=NULL && ptr2!=NULL){
        if(ptr1->data<ptr2->data){
            ptr3->next=ptr1;
            ptr3=ptr3->next;
            ptr1=ptr1->next;
        }
        if(ptr2->data<=ptr1->data){
            ptr3->next=ptr2;
            ptr2=ptr2->next;
            ptr3=ptr3->next;
        }
    }
    if(ptr1==NULL){
        while(ptr2!=NULL){
            ptr3->next=ptr2;
            ptr2=ptr2->next;
            ptr3=ptr3->next;
        }
    }
    if(ptr2==NULL){
        while(ptr1!=NULL){
            ptr3->next=ptr1;
            ptr3=ptr3->next;
            ptr1=ptr1->next;
        }
    }
    return dummynode->next;
}

node* merge_recur(node* &head1,node* &head2){
    if(head1==NULL){
        return head2;
    }
    if(head2==NULL){
        return head1;
    }
    node* result;
    if(head1->data<head2->data){
        result=head1;
        result->next=merge_recur(head1->next,head2);
    }
    if(head2->data<head1->data){
        result=head2;
        result->next=merge_recur(head1,head2->next);
    }
    return result;
}

int main(){
    int arr1[4]={1,4,5,7};
    int arr2[3]={2,3,6};
    node* head1=NULL;
    node* head2=NULL;
    for(int i=0;i<4;i++){
        insertAtTail(head1,arr1[i]);      
    }
    for(int i=0;i<3;i++){
        insertAtTail(head2,arr2[i]);
    }
    display(head1);
    display(head2);
    node* newhead2=merge(head1,head2);
    display(newhead2);
    //node* newhead1=merge_recur(head1,head2);
    //display(newhead1);
    return 0;
}