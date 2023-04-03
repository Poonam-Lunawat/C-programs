#include<stdio.h>  
 int main()    
{    
int n, num,i;
int n0=0,n1=1;
printf(" enter the number of elements :");
scanf("%d",&n);

printf("%d %d",n0,n1);
for(i=2;i<n;i++){
    num=n0+n1;
    printf(" %d",num);
    n0=n1; 
    n1=num;
    
}

}   