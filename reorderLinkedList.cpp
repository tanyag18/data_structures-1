#include<stdio.h>
#include<iostream>
#include<stdlib.h>

using namespace std;

struct Node
{
    int data;
    struct Node* next;
};

void reverse(struct Node** head_ref) 
{ 
    struct Node* prev = NULL; 
    struct Node* current = *head_ref; 
    struct Node* next = NULL; 
    while (current != NULL) { 
        next = current->next; 
        current->next = prev; 
        prev = current; 
        current = next; 
    } 
    *head_ref = prev; 
} 

struct Node* reorderList(struct Node* head){
    struct Node* p=head;
    struct Node* q=head;
    struct Node *second,*start;
    struct Node* res;
    while(1)
    {
        p=p->next->next;
        if(p->next==NULL)
        {
            second=q->next->next;
            break;
        }
        if(p==NULL)
        {
            second=q->next;
            break;
        }
        q=q->next;
    }
    q->next=NULL;
    second=reverse(&second);
    start=head;
    res=second;
    //struct Node* res=mergeLists(struct);
    return res;
}

void addNode(struct Node** head, int data)
{
    struct Node* temp=(struct Node*)malloc(sizeof(struct Node));
    temp->data=data;
    temp->next=*head;
    *head=temp;
}

void printList(struct Node* head)
{
    while(head!=NULL)
    {
        printf("%d ",head->data);
        head=head->next;
    }
}

int main()
{
    struct Node* head=NULL;
    for(int i=5;i>0;i--)
    {
        addNode(&head,i);
    }
    struct Node* r=reorderList(head);
    //reverse(&head);
    printList(r);
}