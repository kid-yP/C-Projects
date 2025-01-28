#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
    Node* previous; // holds the address of the previous node
};

class DoublyLinkedList {
private:
    Node* head;

public:
    DoublyLinkedList() {
        head = nullptr;
    }

    // Insertion at the beginning
    void insertAtBeginning(int value) {
        Node* newNode = new Node();
        newNode->data = value;
        newNode->next = head;
        newNode->previous = nullptr;

        if (head != nullptr) {
            head->previous = newNode;
        }

        head = newNode;
        cout << "Node inserted at the beginning." << endl;
    }

    // Insertion at the end
    void insertAtEnd(int value) {
        Node* newNode = new Node();
        newNode->data = value;
        newNode->next = nullptr;

        if (head == nullptr) {
            newNode->previous = nullptr;
            head = newNode;
            cout << "Node inserted at the end." << endl;
            return;
        }

        Node* temp = head;
        while (temp->next != nullptr) {
            temp = temp->next;
        }

        temp->next = newNode;
        newNode->previous = temp;
        cout << "Node inserted at the end." << endl;
    }

    // Deletion at the beginning
    void deleteAtBeginning() {
        if (head == nullptr) {
            cout << "List is empty. Nothing to delete." << endl;
            return;
        }

        Node* temp = head;
        head = head->next;

        if (head != nullptr) {
            head->previous = nullptr;
        }

        delete temp;
        cout << "Node deleted at the beginning." << endl;
    }

    // Deletion at the end
    void deleteAtEnd() {
        if (head == nullptr) {
            cout << "List is empty. Nothing to delete." << endl;
            return;
        }

        Node* temp = head;
        if (temp->next == nullptr) {
            head = nullptr;
        } else {
            while (temp->next != nullptr) {
                temp = temp->next;
            }
            temp->previous->next = nullptr;
        }

        delete temp;
        cout << "Node deleted at the end." << endl;
    }

    // Insertion after a specific node
    void insertAfter(int c, Node* p) {
        Node* temp = head;
        for (int i = 1; i < c - 1; i++) {
            temp = temp->next;
        }

        p->next = temp->next;
        if (temp->next != nullptr) {
            temp->next->previous = p;
        }
        temp->next = p;
        p->previous = temp;
        cout << "\nInserted successfully" << endl;
    }

    // Display the list
    void display() {
        Node* temp = head;
        while (temp != nullptr) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};

int main() {
    DoublyLinkedList dll;

    dll.insertAtBeginning(10);
    dll.insertAtEnd(20);
    dll.insertAtBeginning(5);
    dll.insertAtEnd(25);

    cout << "List after insertions: ";
    dll.display();

    dll.deleteAtBeginning();
    dll.deleteAtEnd();

    cout << "List after deletions: ";
    dll.display();

    // Example of inserting after a specific node
    Node* newNode = new Node();
    newNode->data = 15;
    dll.insertAfter(2, newNode);

    cout << "List after inserting after a specific node: ";
    dll.display();

    return 0;
}
