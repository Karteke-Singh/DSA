#include<iostream>
#include<vector>
using namespace std;
int top = -1;
int main()
{
    int n;
    cout << "Enter the number of element in array : "<< endl;
    cin >> n;
    int v[100];
    int i;
    cout<< "Do following action to perform : press 1 :-Push ,press 2 :- Pop, Press 3:-Display"<<endl;
    cin >> i;
    switch(i){
        case 1:

        if(top==n-1)
        {
            cout<< "Stack is overflow"<<endl;
        }
        else{
            int a;
            cout<<"Enter the number"<< endl;
            cin>> a;        
            top++;
            v[top]=a;
        }
        break;
        case 2:
        if(top==-1)
        {
            cout<< "Stack is underflow"<<endl;
        }
        else
        {
            int b ;
            cout<<"Enter the number"<< endl;
            cin>> b;            
            v[top]=b;
            top--;

        }
        break;
        case 3:
        

    }


}