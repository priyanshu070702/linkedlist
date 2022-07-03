#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node *next;
};

int sum(Node *p){
    int s=0;
    while(p){
        s = s + p->data;
        p=p->next;
    }

    return s;
}

int main(){

    int A[100];
    int n;

    cout<<"size"<<endl;
    cin>>n;

    for(int i=0;i<n;i++){
        cin>>A[i];
    }

    for(int i=0;i<n;i++){
        cout<<A[i];
    }

    

    Node *head= new Node;
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

    cout<<sum(head)<<endl;

}