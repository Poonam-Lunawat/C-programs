#include<stdio.h>

void main()
{
    int a[]={5,22,7,3,6,9,11};
    int grt,sm,i;
    int n=7;
    printf("List of numbers :");
    for(i=0;i<n;i++)
    printf("  %d ",a[i]);
    sm=a[0];
    grt=a[0];
    
    for(i=1;i<n;i++)
    {
        if(sm>a[i])
            sm=a[i];
        if(grt<a[i])
            grt=a[i];
    }
    printf("\n smallest number is : %d \n greatest number is : %d ", sm, grt);
}