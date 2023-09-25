// Online C++ compiler to run C++ program online
#include <iostream>
#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node * next;
}*head =NULL;

void ll(int A[], int n){
    int i;
    struct node *t, *last;
    head =(struct node*)malloc(sizeof(struct node));
    head -> data = A[0];
    head -> next = NULL;
    last = head;
    for (int i=1;i<n;i++){
        t =(struct node*)malloc(sizeof(struct node));
        t->data = A[i];
        t->next =NULL;
        last->next =t;
        last =t;
    }
}

void display(struct node *p){
    while(p!=NULL){
        printf("%d ",p->data);
        p=p->next;
    }
}
int main() {
    int A []={3,5,6,7,8};
    ll(A, 5);
    display(head);
    return 0;
}