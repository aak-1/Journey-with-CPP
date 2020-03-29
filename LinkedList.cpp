#include<iostream>
#include<stdlib.h>
using namespace std;

struct node{
int data;
struct node* next;
};
typedef struct node* eptr;
int main(){
node a1, a2, a3;
eptr liststart = NULL;
liststart = (eptr)malloc(sizeof(node));
liststart -> data = 3;
liststart -> next = NULL;
//liststart
cout<<liststart -> data;
liststart-> next -> next = (eptr)malloc(sizeof(node));
liststart-> next -> next -> data = 2;
liststart-> next -> next -> next = NULL;
cout<<liststart-> next -> next -> data;

/*
a1.data=1;
a1.next=&a2;
a2.next=&a3;
a3.data=3;
cout<<a3.data<<endl;
cout<<a1.data<<endl;*/

}
