#include<iostream>
using namespace std;

struct node{
    int data;
    node* next;
};

node* addLast(int ndata,node* head){
    //1. lets make a node with data ndata
    node* ptr=new node;
    ptr->data=ndata;
    ptr->next=NULL;

    if(head == NULL){
        head=ptr;
    }else{
        node* temp=head;
        while(temp->next != NULL){
            temp=temp->next;
        }
        temp->next=ptr;
    }
    return head;
}

void printLL(node* head){
    node* temp=head;
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<"\n";
}

node* addFirst(int cur,node* head){
    //1.make a node with the cur data.
    node* ptr=new node;
    ptr->data=cur;
    ptr->next=head;
    head=ptr;
    return head;
}

void deleteLast(node* &head){
    if(head==NULL){
        cout<<"There is no Element here... How could i delete!\n";
    }else if(head->next == NULL){
        //it has only one node
        delete head;
        head=NULL;
    }else{
        //reaching the second last node.
        node* temp=head;
        while(temp->next->next != NULL){
            temp=temp->next;
        }
        delete temp->next;
        temp->next=NULL;
    }
}


void deleteFront(node* &head){
    if(head==NULL){
        cout<<"There is no Element here... How could i delete!\n";
    }else if(head->next == NULL){
        //it has only one node
        delete head;
        head=NULL;
    }else{
        node* temp=head;
        head=head->next;
        delete temp;
    }
}


void deleteX(node* &head,int x){
    if(head==NULL){
        cout<<"There is no Element here... How could i delete!\n";
    }else if(head->next == NULL){
        //it has only one node
        if(head->data != x){
            return;
        }
        delete head;
        head=NULL;
    }else{
        node* temp=head;

        if(head->data==x){
            deleteFront(head);
            return;
        }

        while(temp->next != NULL && temp->next->data !=x){
            temp=temp->next;
        }
        if(temp->next == NULL){
            return;
        }
        node* ptr=temp->next;
        temp->next=temp->next->next;
        delete ptr;
    }
}

int lengthLL(node* head){
    int count=0;
    while(head != NULL){
        head=head->next;
        count++;
    }
    return count;
}

void insertAtPos(node* &head,int x,int pos){
    int len=lengthLL(head);

    if(pos ==1){
        addFirst(x,head);
    }else if(pos > len){
        addLast(x,head);
    }else{
        int count=pos-2;
        node* temp=head;
        while(count > 0){
            temp=temp->next;
            count--;
        }
        node* ptr=new node;
        ptr->data=x;
        ptr->next=temp->next;
        temp->next=ptr;
    }
}

int main(){
    node* head=NULL;
    int n;
    cin>>n;

    for(int i=0;i<n;i++){
        int cur;
        cin>>cur;
        head=addLast(cur,head);
    }   
    int x,pos;
    cin>>x>>pos;
    insertAtPos(head,x,pos);
    printLL(head);
    return 0;
}