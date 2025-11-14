#include <stdio.h>
int main()
{
    int n;
    printf("ENTER THE NUMBER OF ARRAY");
    scanf("%d",&n);
    int arr[100];
    int i;
    for(i=0;i<n;i++)
    {
        printf("Enter %d element ",i+1);
        scanf("%d",arr[i]);
    }
    for(i=0;i<n;i++)
    {
        printf("The %d eleement is %d \n",i+1,arr[i]);
    }
    int pos;
    printf("Enter the index to be deleted");
    scanf("%d",&pos);
    for(i=0;i<n;i++)
    {
        if(i==pos)
        {
            printf("The element is in the list");
            for(i=pos;i<n;i++)
            {
                arr[i]=arr[i+1];
            }
        }
        else
        {
            printf("The element is not in the list");
        }

    }


}