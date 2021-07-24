#include<iostream>
using namespace std;

struct Node{
    int data;
    Node* next;
};
Node* stack=NULL;

int topS(){
    if(stack==NULL){
        cout<<"Khali hu ..kuch nhi top me\n";
        return -1;
    }else{
        return stack->data;
    }
}

void push(int x){
    Node* ptr=new Node;
    ptr->data=x;
    ptr->next=stack;
    stack=ptr;
}

int pop(){
    if(stack == NULL){
        cout<<"Khali hu bhai!\n";
        return -1;
    }
    int deleted=stack->data;
    Node* temp=stack;
    stack=stack->next;
    delete(temp);
    return deleted;
}


int main(){
    cout<<"welcome to my stack\n";

    while(true){
        cout<<"Please Enter Your Choice:\n";
        cout<<"Press 1. to push element\n";
        cout<<"Press 2. to pop element\n";
        cout<<"Press 3. to find the top element\n";
        cout<<"Press 4. to Exit\n";
        int choice;
        cin>>choice;

        switch (choice)
        {
            case 1:{
                cout<<"Enter the Number you want to Push\n";
                int num;
                cin>>num;
                push(num);
                break;
            }
            case 2:{
                cout<<"The item with data: "<<pop()<<" is deleted\n";
                break;
            }
            case 3:{
                cout<<"The item with data: "<<topS()<<" is at the Top\n";
                break;
            }
            case 4:{
                return 0;
            }
        }
    }
    return 0;
}