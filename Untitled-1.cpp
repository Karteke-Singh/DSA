#include<iostream>
using namespace std;
int top =-1;
int n;
int PUSH(int stack[],int item)
{
    if(top==n-1)
    {
        cout<<"Overflow"<< endl;
    }
    else
    {
        top++;
        stack[top]=item;
        cout<<"Pushed" << item << endl;
    }
}
int POP(int stack[])
{
    if(top==-1)
    {
        cout<<"Underflow"<< endl;
    }
    else
    {
        int item;
        item=stack[top];
        top--;
        cout <<"Poped item "<< item<<endl;
    }
}
void DISPLAY(int stack[])
{
    if(top==-1)
    {
        cout<< "Underflow"<< endl;
    }
    else
    [
        int i;
        for(i=0;i<=top;i++)
        {
            cout<<stack[i]
        }
        cout<<endl;
    ]
}
int main()
{
    cout<< "Enter the number of element in it";
    cin>>n;
    int arr[n];
    
}