#include <iostream>
using namespace std;

struct Node{
	int data;
	Node *next;
};
Node *top = NULL;

bool isEmpty(){
	if(top == NULL)
		return true;
	else
		return false;
}

void push(int value){
	Node *newNode = newNode();
	newNode->data = value;
	newNode->next = top;
	top = newNode;
}

void pop(){
	if (isEmpty())
	cout<<"Stack underflow";
	else{
		Node *temp = top;
		top = top -> next;
		delete temp;
	}
}

int main(){
	int value, position, choice;
	
	do{
		cout<<"Enter 1 to push a value: "<<endl;
		cout<<"Enter 2 to pop a value: "<<endl;
		cin>>choice;
		switch():
			
	}
}
