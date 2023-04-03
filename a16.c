// A program for Pascal's triangle
#include<stdio.h>
int fact(int n)
{
    
    int f=1,i;
    for(i=1;i<=n;i++)
    {
        f=f*i;
    }
    return f;
}
int terms(int r, int c)
{
    
    int term= fact(r)/(fact(c)*fact(r-c));
    return term;
}
void main()
{
    int i,j,n;
    printf("\n Enter number of rows ");
    scanf("%d",&n);
    for(i=0;i<=n;i++){
        for(j=0;j<=n-i;j++)
        {
            printf(" ");
        }
        for(j=0;j<=i;j++)
        {
            printf(" %d ",terms(i,j));
        }
        printf("\n");
    }
}