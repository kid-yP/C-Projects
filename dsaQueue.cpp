#include <iostream>
using namespace std;

struct Node{
	int data;
	Node *next;
};
Node *front = NULL;
Node *rear = NULL;

bool isEmpty(){
	if(front == NULL && rear == NULL)
		return true;
	else
		return false;
}

void enque(int value){
	Node *newNode = newNode();
	newNodePtr -> data = value;
	newNodePtr -> next = NULL;
	if(front == NULL){
		front = newNodePtr;
		rear = newNodePtr;
	}
	else{
		rear -> next = newNodePtr;
		rear = newNodePtr;
	}
}

void deque(){
	if(isEmpty())
		cout<<"Empty queue!";
		if(front == rear){
			delete front;
			front = rear = NULL;
		}
		else{
			Node *temp = front;
			front = front->next; 
			delete temp;
		}
}

int main(){
	
}
