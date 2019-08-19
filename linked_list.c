#include<stdio.h>
#include<stdlib.h>

struct Node{
	int data;
	struct Node* next;
};

void print_linkedList(struct Node* node)
{
	while(node!=NULL)
	{
		printf("%d\n",node->data);
		node=node->next;
	}
}

struct Node* insert_beg(int num,struct Node* node)
{
	struct Node* head=(struct Node*)malloc(sizeof(struct Node));
	head->data=num;
	head->next=node;
	return head;
}

void insert_end(int e,struct Node* node)
{
	struct Node* tail=(struct Node*)malloc(sizeof(struct Node));
	node->next=tail;
	tail->data=e;
	tail->next=NULL;
}

int main(int argc,const char* argv[])
{
	int i;
	int n=argc-1;
	struct Node* node[n];
	for(i=0;i<n;i++)
	{
		node[i]=NULL;
		node[i]=(struct Node*)malloc(sizeof(struct Node));
	}
	for(i=0;i<n-2;i++)
	{
		node[i]->data=atoi(argv[i+1]);
		node[i]->next=node[i+1];
	}
	node[n-2]->data=i+1;
	node[n-2]->next=NULL;
	//struct Node* h=insert_beg(atoi(argv[argc-1]),node[0]);
	//print_linkedList(h);
	insert_end(atoi(argv[argc-1]),node[n-2]);
	print_linkedList(node[0]);
	return 0;
}
