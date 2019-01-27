//circular linklist
#include <iostream>
using namespace std;

// Generic Programming  

class Node{
    public:
    // Data 
    int data;
    // Pointer to the next Node
    Node * next;
    // Construct that makes the ptr to NULL
    Node(int value){
        next = NULL;
        data = value;
    }
};

class CSLL{
    public:
    Node * head;
    CSLL(){
        head = NULL;
    }
    // Inserts to the end of the linked list.
    void insert(int value){
        
        // Create a new node
        Node * temp = new Node(value);
        // CHeck if empty list
        if(head == NULL){
            head = temp;
        }  
        else{ // If not empty list. 
            Node * current = head;
            while(current->next != head)
                current = current->next;
            current->next = temp;
        }
        temp->next = head;
    }
    // Displays the linked list.
    void display(){
        Node * current = head;
        if(current == NULL) {
            cout << "No elements " << endl;
            return;
        }
        while(current->next != head){ // Stopping at head
            cout << current -> data << "->";
            current = current -> next;
        }
        // Printing the last element
        cout << current -> data ;
        cout << endl;
    }
    void InsertAt(int value, int pos){
       Node *current;
	current = head;
	Node * temp = new Node(value);
	int i =1;
	while(i<pos-1&current->next!=head){
		current =current->next;
		i++;	
	}
	
	temp->next = current->next;

	current->next =temp;
	
    }
    void DeleteAt(int pos){
       Node *temp =NULL;
       Node *current =head;
	int i =1;
	while(i<pos-1){
		current = current->next;
		i++;	
	}
	temp = current->next;
	current->next =temp->next;
	
	
	
	delete temp;
    }
    void Delet(){
        Node *temp =NULL;
	Node *current = head;
	while(current->next->next!=head){
		current = current->next;	
	}
	temp = current->next;
	current->next =head;
	delete temp;
    }
    void CountItems(){
       	int i =1;
	 Node * current = head;
        if(current == NULL) {
            cout << "there is no elements " << endl;
            return;
        }
        while(current->next != head){ // Stopping at head
            i++;
	    current = current->next;}
	cout<<"the number of element in the linklist = "<<i<<endl;}
};

int main(){
    CSLL csll1;
    for(int i= 1; i < 11; i++){
       csll1.insert(i);
    }
    //csll1.insert(1);
    csll1.display();
    csll1.InsertAt(56,4);
    csll1.display();
    csll1.DeleteAt(5);
    csll1.display();
    csll1.Delet();
    csll1.display();
    csll1.CountItems();
    
}

