#include <iostream>
using namespace std;

struct node {
    int info;
    struct node *next;
};
struct node *start = NULL;

struct node* create_node(int item) {
    struct node *new_node = new node; 
    new_node->info = item;
    new_node->next = NULL;
    return new_node;
}

int length() {
    int count = 0;
    struct node *temp = start;
    while (temp != NULL) {
        count++;
        temp = temp->next;
    }
    return count;
}

void insert() {
    int item, pos;
    cout << "Enter the item: ";
    cin >> item;

    struct node *ptr = create_node(item);

    if (start == NULL) {   
        start = ptr;
        cout << "Item inserted at position 1" << endl;
        return;
    }

    cout << "Enter the position (starting from 1): ";
    cin >> pos;

    int n = length();
    if (pos < 1 || pos > n + 1) {
        cout << "Invalid position! Current length = " << n << endl;
        delete ptr; 
        return;
    }

    if (pos == 1) {   
        ptr->next = start;
        start = ptr;
    } else {      
        struct node *temp = start;
        for (int i = 1; i < pos - 1; i++) {
            temp = temp->next;
        }
        ptr->next = temp->next;
        temp->next = ptr;
    }

    cout << "Item inserted at position " << pos << endl;
}

void display() {
    if (start == NULL) {
        cout << "LL is empty" << endl;
    } else {
        struct node *temp = start;
        cout << "Linked List: ";
        while (temp != NULL) {
            cout << temp->info << " ";
            temp = temp->next;
        }
        cout << endl;
    }
}

int main() {
    int choice = 0; 
    while (choice != 3) {
        cout << "\n1. Insert at position\n2. Display\n3. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;
        switch (choice) {
            case 1:
                insert();
                break;
            case 2:
                display();
                break;
            case 3:
                cout << "Exiting program." << endl;
                break;
            default:
                cout << "Enter the correct choice" << endl;
        }
    }
    return 0;
}
