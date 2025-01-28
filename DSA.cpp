#include <iostream>
using namespace std;

struct Node{
	int data;
	Node *next;
};
Node *start = NULL;

void insert_beg(int new_data){
	Node *temp, *new_node = new Node;
	temp = start;
	new_node -> data = new_data;
	start = new_node;
	new_node -> next = temp;
	cout<<"Inserted at the begining"<<endl;
	
}

void insert_end(int new_data){
	Node *temp, *new_node = new Node;
	temp = start;
	new_node -> data = new_data;
	while(temp->next != NULL){
		temp = temp -> next;
	}
	temp->next = new_node;
	new_node -> next = NULL;
	cout <<"Inserted at the end"<<endl;
}

void insert_at_pos(int new_data, int pos){
	Node *temp, *new_node = new_node;
	new_node -> data = new_data;
	temp = start;
	for(int i = 1; i < pos; i++){
		temp = temp -> next;
		
		if(temp = NULL){
			cout<<"Wrong position entered";
		}
		else{
			new_node -> next = temp-> next;
			temp -> next = new_node;
			cout<<"Inserted at the position";
		}
	}
}

void delete_at_pos(int pos){
	
	Node *q, *temp = new Node;
	q = start;
	for(int i = 1; i < pos; i++){
		q = q->next;
		if(q==NULL)
		cout<<"Wrong position";
	
		if(i == pos){
			temp = q -> next;
			q -> next = temp->next;
			delete temp;
	}
	}
}

void delete_beg(){
	Node *temp = start;
	start = temp -> next;
	delete temp;
}

void delete_end(){
	Node *temp, *q = start;
	while(q -> next -> next != NULL){
		q = q -> next;
		temp = q -> next;
		q -> next = NULL;
		delete temp;
	}
}

void display(){
	Node *temp = start;
	while(temp!=NULL){
		cout<<temp -> data <<"\t"<<endl;
		temp = temp -> next;
	}
}

int main(){
	int n, num, x, pos;
	
	do{
		cout<<"1, Enter a number at the begining"<<endl;
		cout<<"2, Enter a number at the end"<<endl;
		cout<<"3, Enter a number at the position"<<endl;
		cout<<"4, Delete a number at the position"<<endl;
		cout<<"5, Delete the number at the begining"<<endl;
		cout<<"6, Delete a number at the end"<<endl;
		cout<<"7, Show all the numbers"<<endl;
		cin>> n;
		
		switch(n){
			case 1:
				cout<<"Enter a number:"<<endl;
				cin>>num;
				
				insert_beg(num);
				break;
			
			case 2:
				cout<<"Enter a number:"<<endl;
				cin>>num;
				
				insert_end(num);
				break;
			case 3:
				cout<<"Enter a number at the position:"<<endl;
				cin>>num;
				
				cout<<"Enter the position:"<<endl;
				cin>>pos;
				
				insert_at_pos(num, pos);
				break;	
			case 4:
				cout<<"Delete a number from the position:"<<endl;
				cin>>num;
				
				delete_at_pos(num);
				break;
			case 5:
				break;
			case 6:
				break;
			case 7:
				display();
				break;
				
			default:
				cout<<"Enter the correct number"<<endl;
		}
		
		cout<< "Enter 0 if you want to exit: "<<endl;
		cin>> x;
	}while(x != 0);
	
}





