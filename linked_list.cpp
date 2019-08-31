#include<iostream>
#include "Node.cpp"
using namespace std;


class Mylinked_list{
	private:
		Node* head;
	public:
		Mylinked_list(Node* head){
                this->head=head;
                }
		void transverse();
};


void Mylinked_list::transverse(){
	while(head!=NULL)
	{
		cout<<head->get_data()<<endl;
		head=head->get_next_node();
	}
};

int main(void)
{
        Node *node3 = new Node(3,NULL);
        Node *node2 = new Node(2,node3);
        Node *head = new Node(1,node2);

                        Mylinked_list* linked_list=new Mylinked_list(head);
                        linked_list->transverse();

        return 0;
}


