#include <iostream>
using namespace std;

int top = -1;
int n;

int push(int stack[], int item) {
    if (top == n - 1) {
        cout << "Stack Overflow" << endl;
    } else {
        top++;
        stack[top] = item;
    }
    return top;
}

int pop(int stack[], int &item) {
    if (top == -1) {
        cout << "Stack Underflow" << endl;
        item = -1;
    } else {
        item = stack[top];
        top--;
    }
    return top;
}

void display(int stack[]) {
    if (top == -1) {
        cout << "Stack is empty" << endl;
    } else {
        cout << "Stack elements: ";
        for (int i = 0; i <= top; i++) {
            cout << stack[i] << " ";
        }
        cout << endl;
    }
}

int main() {
    cout << "Enter the maximum number of elements for the stack (max 100): ";
    cin >> n;

    if (n > 100) {
        cout << "Max stack size is 100. Reducing n to 100." << endl;
        n = 100;
    }

    int arr[100];
    int choice;

    do {
        cout << "\n--- Stack Operations ---\n";
        cout << "1. Push\n2. Pop\n3. Display\n4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: {
                int item;
                cout << "Enter the item to push: ";
                cin >> item;
                push(arr, item);
                break;
            }
            case 2: {
                int poppedItem;
                pop(arr, poppedItem);
                if (poppedItem != -1) {
                    cout << "Popped item: " << poppedItem << endl;
                }
                break;
            }
            case 3:
                display(arr);
                break;
            case 4:
                cout << "Exiting program." << endl;
                break;
            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    } while (choice != 4);

    return 0;
}

