#include<stdio.h>
void ToH( int n, char s,char m,char d)
{
    if(n==1)
    {
        printf("Move disk from %c to %c \n",s,d);
    }
    else
    {
        ToH(n-1,s,d,m);
        printf("Move disk from %c to %c\n",s,d);
        ToH(n-1,m,s,d);
    }
}
int main()
{
    int a;
    printf("Enter the no. of disk: ");
    scanf("%d",&a);
    char S='s';
    char M='m';
    char D='d';
    ToH(a,S,M,D);
}