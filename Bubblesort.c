#include<stdio.h>
void Bubble_Sort(int A[],int n)
{
    int i,j;
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(A[j]>A[j+1])
            {
                int temp=A[j];
                A[j]=A[j+1];
                A[j+1]=temp;
            }
        }
    }
    printf("Sorted Array :-\n");
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
    Bubble_Sort(a,N);

}