#include<iostream>
#include<stdlib.h>
using namespace std;

struct node{
    int info;
    struct node *next;
};
struct node *start,*new_node;
struct node *create_node(int item)
{
    new_node=(struct node*)malloc(sizeof(struct node));
    new_node -> info=item;
    new_node -> next=NULL;
    return new_node;
}
void insert()
{
    int item;
    cout<<"Enter the item";
    cin >> item;
    struct node *ptr;
    ptr=create_node(item);
    if(ptr==NULL)
    {
        cout<<"Memory not allocated";
    }
    else if(start==NULL)
    {
        start=ptr;
        cout<<"Item inserted"<<endl;
    }
    else
    {
        ptr -> next = start;
        start=ptr;
        cout<<"Item inserted"<<endl;
    }
}
void display()
{
    if(start==NULL)
    {
        cout<<"LL is empty"<<endl;
    }
    else
    {
        struct node *temp;
        temp=start;
        while(temp!=NULL)
        {
            cout<<temp -> info << endl;
            temp = temp -> next;
        }
    }
}
void del()
{
    struct node *temp;
    temp=start;
    if(start==NULL)
    {
        cout<<"Linked list is empty"<<endl;
    }

    else if(start -> next== NULL)
    {
        cout<<start->info <<endl;
        free(start);
    }
    else
    {
        struct node *temp;
        temp=start;
        struct node *ptr;
        ptr=start;
        while(temp -> next!=NULL)
        {
            ptr=temp;
            temp=temp->next;
        }
        ptr -> next==NULL;
        cout<<"deleted element" << temp -> info <<endl;
        free(temp);

    }
}
int main()
{
    int choice;
    while(choice!=4)
    {
        cout<<"1. Press 1 to insert at beginning \n 2. Press 2 for display\n 3. Press 3 for detition at \n 4. Press 4 for exit\n";
        cin >> choice;
        switch(choice)
        {
            case 1:
            insert();
            break;
            case 2:
            display();
            break;
            case 3:
            del();
            break;
            case 4:
            break;
            default:
            cout<<"Enter the correct choice"<<endl;

        }
    }
}
