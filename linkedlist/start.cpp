#include<iostream>
using namespace std;

struct Node{
    int data;
    struct Node*next;
};

int main(){
    struct Node*p;
    p = new Node;

    p->data = 10;
    p->next = 0;

    cout<<p->data;
}