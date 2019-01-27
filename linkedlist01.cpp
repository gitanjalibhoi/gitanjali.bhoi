//the library
#include <iostream>
using namespace std;
//to prepare doublylinklist
class Node {
	public:
		//data
		int data;
		//pointer to the previous
		Node *prev;
		//pointer to the next
		Node *next;
		// constructer that makes the pointer Null
		Node(){
		
			prev = NULL;
			next = NULL;
	          }
};
class Linked list{
	//head - circles inside liked with each other
	public:
		//head circle type pointer
		Node *head;
		//since there isa single circle - head it also act as a tail for
		Node * tail;
		//constructer that initially makes the head null
		Linked list (){
				head = NULL;
				tail = NULL; 
               }
	//circles linked with each other
	//the rules how they will connected
	//insert function
	void insert (int value){
		// at first node had to be crested
		Node * temp = new Node ;
		/*it says that in the heap create a node give back the adress and store it in the temp*/
		 temp->data = value ;
		//go to the temp adress and find data part and assign value
		//the condition begins
		if (head == NULL) {
			head = temp;
		}
	    //second node onwards
		else {
			  tail -> next = temp;
			  temp -> prev = tail;
			 }
		 tail = temp;
	}
// a function to insert at a pos
  int insertat (int pos,int value){
	//at first a new node has to be created to insert
	Node * temp = new Node;
	//insert the value at the node
	temp->data = value;
	//reach the place before point of insert
	Node * current = head;
	//the condition begins 
	if (pos == 1){
			 temp->next = current;
			 current->prev = temp;
			 head = temp;
	 }
	else {
		   int i = 1;
		   while (i < pos-1){
		   	i++;
		   current = current->next;
	   }
       Node * x = current->next;
     //a new node type pointer has been created
		temp->prev = current;
		current->next = temp;
        temp ->next = x;
        x->prev = temp;
	}
	return 0;
}
//function fot count items
//xalling a function
int count(){
	//the condition begins 
	if (head == NULL){
	  cout << "0" << endl;
	}
	else {
	 int i;
	Node * current = head;
	for (i= 1;current -> next != NULL;i++){
	  // the cuttrnt needs to move 
	 current = current ->next;
	  }
	cout <<i<<endl;
	 }
}
//the function for delete items
//calling the function
void delet(){
		//the conditin to delete the last item
		//store the add of tail in temp
		Node * temp = tail;
		// moving the current to the point 
		Node * current = head;
		//the loop begins 
		    while (current->next != tail)
          { 
            current = current->next;
          }
          current->next = NULL;    
          // update tail
   		tail = current;
		tail->next=NULL;
		//delete temp
	      delete temp;
	}
// calling a function that deletes node at a particular position
int delpos(int post){
	 Node * current = head;
	//the conditios applied foe deleting the nodes
	if (post == 1){
	head = current->next ;
	 }
	else {
	  int i = 0;
	 for (i=1;i< post-1;i++){
		     current= current->next;
	 }
		    //declararing the temp
		 Node*temp = (current->next)->next ;
		    current->next = temp;
		    temp->prev = current;
     }
	  
}
 //the display function

void display(){
       Node * current = head;
     //the loop starts    	
	 while (current != NULL){
	   cout << current->data << "-> ";
	   current  = current->next ; 
	  }
       cout<< endl;
	}
};

 int main (){
Linkedlist l1;
l1.count();
l1. insert (1);
l1. insert(2);
l1. insert (3);
l1. insert (4);
l1. display ();
l1. count ();
l1. display ();
l1.insertat(2,10);
l1. display ();
l1. delet();
l1. display ();
l1.delpos(3);
l1. display();
 
return 0 ;

} 
