#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *ptr,n;
    printf("\nEnter number of elements: ");
    scanf("%d",&n);
    ptr=(int *)malloc(sizeof(int));

    *ptr=25;
    if(ptr==NULL)
    {
        printf("\nMemory Allocation failed\n");
        return 0;
    }

    else
    {
         for(int i=0;i<n;i++)
    {
        printf("\nEnter element %d: ",i+1);
        scanf("%d",&ptr[i]);
    }
        printf("Done %d",*ptr);
    }
    return 0;

}
