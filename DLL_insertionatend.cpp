#include<iostream>
using namespace std;

struct node{
    int data;
    node* next;
    node* prev;

    node(int value):data(value),next(nullptr),prev(nullptr){}
};

void insertatend(node*& head,int value){
    node* newnode=new node(value);
    if(head==nullptr){
        head=newnode;
        return;
    }
    node* temp=head;
    while(temp->next!=nullptr){
        temp=temp->next;
    }
    temp->next=newnode;
    newnode->prev=temp;
}

void display(node*head){
    node*temp=head;
    while(temp!=nullptr){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<endl;
}

int main(){
    node*head=nullptr;
    int value,n;
//we are predefinig a the size of the double linked list after which we can say its overflow or not
    cout<<"Enter the number of elements :";
    cin>>n;

    for(int i=0;i<n;i++){
        cout<<"Enter the value:";
        cin>>value;
        insertatend(head,value);
}
    cout<<"The Double linked list:";
    display(head);

    return 0;
}
