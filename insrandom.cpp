
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
    int pos;
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
        cout<<"Enter the position";
        cin >> pos;
        struct node *temp;
        temp=start;
        int i;
        while(temp -> next != NULL)
        {
            for(i=0;i<pos;i++)
            {
                temp = temp -> next;
            }
            new_node -> next =temp -> next;
            temp -> next =new_node;
        }

        cout<<"Item inserted";

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
int main()
{
    int choice;
    while(choice!=3)
    {
        cout<<"1. Press 1 to insert at end \n 2. Press 2 for display\n 3. Press 3 for exit";
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
            exit(0);
            break;
            default:
            cout<<"Enter the correct choice"<<endl;

        }
    }
}


