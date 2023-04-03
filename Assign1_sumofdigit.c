#include<stdio.h>  
 int main()    
{    
int n,sum=0,m;    
printf("Enter a number:");    
scanf("%d",&n);    
while(n>0)    
{    
m=n%10; 
//printf("\n %d",m);
sum=sum+m;    
n=n/10;  
//printf("\n %d",n);
}    
printf("\n Sum is=%d",sum);    
return 0;  
}    