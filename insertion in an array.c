#include <stdio.h>
int main()
{
    int n,i;
    printf("Enter the number of element in the array");
    scanf("%d",&n);
    int arr[100];
    for(int i=0;i<n;i++)
    {
        printf("Enter the %d element",i+1);
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        printf("The %d element is %d\n",i+1,arr[i]);

    }
    int val,pos;
    printf("Enter the number to be inserted and index");
    scanf("%d %d",&val,&pos);
    for(i=n;i>pos;i--)
    {
        arr[i]=arr[i-1];
    }
    arr[pos]=val;
    printf("The new list is :-\n");
    for(i=0;i<n+1;i++)
    {
        printf("element %d is %d \n",i+1,arr[i]);
    }
    return 0;
}