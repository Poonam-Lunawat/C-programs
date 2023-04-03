#include<stdio.h>
#include<math.h>
int to_decimal(long long n);
void to_binary(int n);
void to_octal(int n);
void main()
{
    long long n;
    int n1,res;
    int ch;
   
    printf("\n 1: Binary to Decimal. \n 2: Decimal to binary \n 3: Decimal to octal \n 4: binary to octal");
    printf("\n Enter your choice: ");
    scanf("%d",&ch);
    
    switch(ch)
    {
        case 1:  
                printf("\n Enter the number :");
                scanf("%lld",&n);
                res=to_decimal(n);
                printf("\n the decimal number is: %d",res);
                break;
        case 2: 
                printf("\n Enter the number :");
                scanf("%d",&n1);
                to_binary(n1);
                break;
        case 3:
                printf("\n Enter the number :");
                scanf("%d",&n1);
                to_octal(n1);
                break;
        case 4:
                printf("\n Enter the number :");
                scanf("%lld",&n);
                res=to_decimal(n);
                to_octal(res);
                
                break;
        default:
                break;
    }
}

int to_decimal(long long n)
{
  int sum=0;
    int rem;
    int i=0;
    while(n>0)
    {
        rem=n%10;
        n=n/10;
        sum=sum+(rem*pow(2,i));
        ++i;
    }
   // printf(" \n Decimal number is :%d",sum);
   return sum;
}

void to_binary(int n)
{
    long long bin=0;
    int rem,i=1;
  
    while(n!=0)
    {
       
        rem=n%2;
        n=n/2;
        bin=bin+(rem*i);
        i=i*10;
        
    }
    printf("\n the binary number is : %lld",bin);

}
void to_octal(int n)
{
    long long oct=0;
    int rem,i=1;
  
    while(n!=0)
    {
       
        rem=n%8;
        n=n/8;
        oct=oct+(rem*i);
        i=i*10;
        
    }
    printf("\n the octal number is : %lld",oct);

}
