class Node
{
        private:
                int data;
                Node* next;

        public:
                Node(int d, Node* next){
                        data=d;
                        this->next=next;
                }
        int get_data(){
                return data;
        }               
        Node* get_next_node(){
                return next;
        }

};

