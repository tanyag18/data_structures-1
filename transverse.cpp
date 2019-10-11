#include<iostream>
#include<string>
#include<cstdlib>
using namespace std;
  
class Node{
	public:
	int data;
	Node* next[2];
	 Node(int data) 
    	{ 
        	this->data = data; 
        	next[0] = next[1] = NULL; 
    	}
};

void preorder(Node *root){
	if(root==NULL)
		return;
	cout<<root->data <<" ";
	preorder(root->next[0]);
	preorder(root->next[1]);
}

int main(int argc, char* argv[])
{
	/*Node* root=new Node();
	Node* node2=new Node();
	Node* node3=new Node();
	Node* node4=new Node();
	Node* node5=new Node();
	root->data=1;
	node2->data=2;
	node3->data=3;
	node4->data=4;
	node5->data=5;
	node3->next[0]=NULL;
	node4->next[0]=NULL;
	node5->next[0]=NULL;
	 node3->next[1]=NULL;
        node4->next[1]=NULL;
        node5->next[1]=NULL;
	node2->next[0]=node4;
	node2->next[1]=node5;
	root->next[0]=node2;
	root->next[1]=node3;*/

	Node *root = new Node(1); 
    	root->next[0]= new Node(2); 
    	root->next[1] = new Node(3); 
   	root->next[0]->next[0] = new Node(4); 
    	root->next[0]->next[1]= new Node(5); 


	preorder(root);
	return 0;
}
