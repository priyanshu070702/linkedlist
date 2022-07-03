#include<iostream>
using namespace std;

class Node{
    public:
     int data;
     Node *next;
};

int main(){
    int A[]={3,4,5,3,2};

    Node *head = new Node;
    Node *temp;
    Node *last;

    head->data=A[0];
    head->next =NULL;
    last=head;

    for(int i=0;i<sizeof(A)/sizeof(A[0]);i++){
        temp=new Node;
        temp->data = A[i];
        temp->next =NULL;
        last->next=temp;
        last=temp;
        
        
    }
    Node *p=head;

    while(p!=NULL){
            cout<<p->data<<"->"<<flush;
            p=p->next;
        }
}

