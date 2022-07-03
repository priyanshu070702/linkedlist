#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node *next;

};

int count(Node*p){
    int c=0;
    while(p){
        c++;
        p=p->next;
    }
    return c;
}

int main(){
    int A[]={3,5,7,10,15};

    Node *head = new Node;
    Node *temp;
    Node *last;

    head->data=A[0];
    head->next=nullptr; 
    last=head;

    for(int i=1;i<sizeof(A)/sizeof(A[0]);i++){
        temp=new Node;
        temp->data=A[i];
        temp->next=nullptr;
        last->next=temp;
        last=temp;
    }

    cout<<count(head);

}