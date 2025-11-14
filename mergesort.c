#include<stdio.h>
void mergesort(int A[], int beg, int mid, int end)
{
    int n1 = mid - beg + 1;
    int n2 = end - mid;
    int l[100],r[100];
    int i,j;
    for(i=0;i<n1;i++)
    {
        l[i]=A[beg + i];
        for(j=0;j<n2;j++)
        {
            r[j]=A[mid +1 +j];
        }
        i=0;
        j=0;
        int k;
        while(i<n1 && j<n2)
        {
            if(l[i]<=r[j])
            {
                A[k]=l[i];o.v
            }
        }
    }
}