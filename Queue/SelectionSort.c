#include<stdio.h>
void Selection_Sort(int A[100],int n)
{
    int i,j,minindex;
    for(i=0;i<n-1;i++)
    {
        minindex=i;
        for(j=i+1;j<n;j++)
        {
            if(A[j]<A[minindex])
            {
                minindex=j;
            }
        }
        int temp=A[minindex];
        A[minindex]=A[i];
        A[i]=temp;
    }
    printf("Sorted Array:-\n");
    for(i=0;i<n;i++)
    {
        printf("%d ",A[i]);
    }
}
int main()
{
    int N,i;
    printf("Enter the number of element in Array");
    scanf("%d",&N);
    int a[100];
    for(i=0;i<N;i++)
    {
        printf("\nEnter the %d element:- ",i+1);
        scanf("%d",&a[i]);
    }
    Selection_Sort(a,N);

}