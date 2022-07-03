#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node *next;
};

int maximun(Node *p){
    int max=0;
    while(p){
        if(p->data>max){
            max=p->data;
           
        }
         p=p->next;
    }
    return max;
}

int main(){
    int A[]={1,2,3,4,5};

    Node *head = new Node;
    Node *temp;
    Node *last;

    head->data=A[0];
    head->next=NULL;
    last=head;

    for(int i=0;i<sizeof(A)/sizeof(A[0]);i++){
        temp = new Node;
        temp->data=A[i];
        temp->next=NULL;
        last->next=temp;
        last=temp;

    }

    cout<<maximun(head);

}