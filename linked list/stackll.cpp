# include<iostream>
# include<stdlib.h>
using namespace std;
struct node{
    int info;
    struct node *next;
};
struct node *top,*new_node;
struct node *create_node(int item)
{
    new_node=(struct node*)malloc(sizeof(struct node));
    new_node -> info = item;
    new_node -> next = NULL;
    return new_node;
}
void push()
{
    int item;
    cout << "Enter the Item to be pushed :- ";
    cin >> item;
    struct node *ptr;
    ptr = create_node(item);
    if(ptr==NULL)
    {
        cout << "memory not allocated"<<endl;
    }
    else
    {
        if(top== NULL)
        {
            top=ptr;
            cout<< "Pushed"<<endl;
        }
        else
        {
            ptr -> next = top;
            top= ptr;
            cout<<"Pushed"<<endl;
        }
    }
}
void pop()
{
    if(top==NULL)
    {
        cout<<"Underflow";
    }
    else if(top-> next==NULL)
    {
        cout<<"Popped "<< top-> info<<endl;
        free(top);
        top=NULL;
    }
    else
    {
        struct node * ptr;
        ptr = top;
        top = top -> next;
        free(ptr);
        cout<< "Popped "<< ptr -> info << endl;
    }
}
void display()
{
    if(top == NULL)
    {
        cout<<"Underflow"<< endl;
    }
    else
    {
        struct node *ptr;
        struct node *temp;
        temp=top;
        while(temp!=NULL)
        {
            cout << temp -> info;
            temp =temp -> next;
        }

    }

}
int main()
{
    int n;
    while(n!=4)
    {
        cout << "1. Click 1 for PUSH\n2. Click 2 for POP\n3. Click 3 for DISPLAY\n4. Click 4 for Exit the STACK\n :-";
        cin >> n;
        switch(n)
        {
            case 1:
            push();
            break;
            case 2:
            pop();
            break;
            case 3:
            display();
            break;
            case 4:
            exit(0);
            break;
            default:
            cout<<"Enter the Valid Choice"<< endl;
        }
    }
}