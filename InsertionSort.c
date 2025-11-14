#include<stdio.h>
void Insertion_Sort(int A[],int n)
{
    int i,j,key;
    for(i=0;i<n;i++)
    {
        key=A[i];
        j=i-1;
        while(j>=0 && A[j]>key)
        {
            A[j+1]=A[j];
            j--;
        }
        A[j+1]=key;
    }
    printf("Sorted Array :- \n");
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
    Insertion_Sort(a,N);

}