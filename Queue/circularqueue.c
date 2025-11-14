#include <stdio.h>
#define MAX 100
int queue[MAX];
int front = -1;
int rear = -1;
void enqueue(int value)
{
    if( (front ==0 && rear == MAX-1)|| front == rear + 1)
    {
        printf("\n Overflow");
        return;
    }
    else if(front == -1)
    {
        front=0;
        rear=0;
    }
    else if(rear==MAX - 1)
    {
        rear = 0;
    }
    else
    {
        rear = rear + 1;
    }
    queue[rear]=value;
    return value;

}
void dequeue()
{
    if(front == -1)
    {
        printf("\nUnderflow");
    }
    int item = queue[front];
    if(front = rear)
    {
        front = rear = -1;
    }
    else if(front == MAX-1)
    {
        front = 0;
    }
    else
    {
        front = front + 1;
    }
    return item;
}
void display()
{
    int i;
    for (i=front;i<=rear;i++)
    {
        printf("%d ",queue[i]);
    }
}
int main()
{
    
}

