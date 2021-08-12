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

// Insert at tail

void InsertAtTail(node* &head,int value){        // here we are taking head by refernce cause we need to mmodify our linked list...
    node* n= new node(value);                    // generated a node to insert 

    if(head==NULL){
        head=n;
        return;
    }
    node* temp = head;
    while(temp->next!=NULL){
        temp = temp->next;
    }
    temp->next=n;
}

// Insert at head 

void InsertAtHead(node* &head,int value){
    node* n=new node(value);
    n->next=head;
    head=n;
}

void display (node* head){       // here we are taking head by value cause we wont need any modification in linked list 
    node* temp =head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

bool search(node* head,int key){
    node* temp =head;
    while(temp!=NULL){
        if(temp->data==key){
            return true;
        }
        temp=temp->next;
    }
    return false;
}

void deletionAtHead(node* &head){
    node* todelete = head;
    head=head->next;
    delete todelete;
}

void deletion(node* &head,int value){
    if(head==NULL){
        return;
    }
    node* temp=head;
    while(temp->next->data!=value){
        temp=temp->next;
    }
    node* todelete=temp->next;
    temp->next=temp->next->next;

    delete todelete;
}

node* reverse(node* &head){
    node* previptr=NULL;
    node* currentptr=head;
    node* nextptr;

    while(currentptr!=NULL){
        nextptr=currentptr->next;
        // operation on reversion..
        currentptr->next=previptr;
        //iteration 
        previptr=currentptr;
        currentptr=nextptr;
    }
    return previptr; 
}

node* reverse_recur(node* &head){
    //base case
    if(head==NULL || head->next==NULL){
        return head;
    }
    node* newhead=reverse_recur(head->next);
    //links change 
    head->next->next=head;
    head->next=NULL;
    // return of newhead
    return newhead;
}

node* reverse_k(node* &head,int k){
    node* previptr=NULL;
    node* currentptr=head;
    node* nextptr;

    int count=0;
    while(currentptr!=NULL && count<k){
        nextptr=currentptr->next;
        currentptr->next=previptr;
        count++;

        previptr=currentptr;
        currentptr=nextptr;
    }
    if(nextptr!=NULL){
        head->next=reverse_k(nextptr,k);
    }
    return previptr;
}


int main(){
    node* head=NULL;
    InsertAtTail(head,1);
    InsertAtTail(head,2);
    InsertAtTail(head,3);
    InsertAtTail(head,4);
    InsertAtTail(head,5);
    InsertAtTail(head,6);
    //InsertAtHead(head,4);
    //InsertAtHead(head,5);
    //InsertAtHead(head,6);
    //InsertAtHead(head,7);
    //deletion(head,2);
    //display(head);
    //cout<<search(head,5)<<endl;
    //cout<<search(head,3)<<endl;
    //node* newhead=reverse(head);
    //node* newhead=reverse_recur(head);
    //display(newhead);
    node* newhead=reverse_k(head,2);
    display(newhead);
    
    return 0;
}