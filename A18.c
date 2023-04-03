#include<stdio.h>
#include<math.h>

void main(){
    int x,n;
    long int sum=0;
    printf("\n enter x :");
    scanf("%d",&x);

    printf("\n Enter n :");
    scanf("%d",&n);
    if(n>0){
    for(int i=1;i<=n;i++)
    {
        sum=sum+pow(x,i);
    }
    printf("\n Sum : %ld",sum);
    }
    else
        printf("\n n should be greter than 0");
    
}