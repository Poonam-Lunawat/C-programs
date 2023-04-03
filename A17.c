// A program to print pyramid of numbers

#include<stdio.h>

int main()
{
    int i,j,n;
    printf("\n Enter how many rows you want ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n-i;j++)
            printf(" ");
        //for(j=1;j<=(2*i-1);j++)
        for(j=1;j<=i;j++)
        {
            printf("%2d",i);
        }
        printf("\n");
    }
}