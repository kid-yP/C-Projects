#include <iostream>
using namespace std;

struct Node{
	int data;
	Node *left, *right;
}; Node *RNP = NULL;

void insertBST(int value){
	Node *newNodePtr = new Node();
	newNodePtr -> data = value;
	int inserted = 0;
	if(RNP == NULL)
		RNP = newNodePtr;
	else{
		while(inserted == 0){
			if(RNP -> data > newNodePtr -> data){
				if(RNP -> left == NULL){
					RNP -> left = newNodePtr;
					inserted = 1;
				}
				else{
					RNP = RNP -> left;
				}
			}
			else{
				if(RNP -> right == NULL){
					RNP -> right == newNodePtr;
					inserted = 1;
				}
				else{
					RNP = RNP -> right;
				}	
			}
		}
	}
}
void inOrderTraversal(Node *node) { 
	if (node != NULL) { 
		inOrderTraversal(node->left); 
		cout << node->data << " "; 
		inOrderTraversal(node->right);
		} 
	}

	void displayBST(Node *node, int space = 0, int height = 10) { 
		if (node == NULL) return; 
		space += height; 
		displayBST(node->right, space); 
		cout << endl; 
		for (int i = height; i < space; i++) cout << ' '; 
		cout << node->data << "\n"; 
		displayBST(node->left, space); 
		}
		
int main() { 
	int value; 
	char choice;
	do { 
		cout << "Enter an integer value to insert into the BST: "; 
		cin >> value; 
		insertBST(value); 
		cout << "Value inserted into the BST." << endl; 
		cout << "Do you want to insert another value? (y/n): "; 
		cin >> choice; 
	} while (choice == 'y' || choice == 'Y'); 
		
	cout << "In-order traversal of the BST: "; 	
	inOrderTraversal(RNP);
	cout<<endl;
	
	cout << "BST structure:" << endl; 
	displayBST(RNP);
	
	return 0; 
	
}
