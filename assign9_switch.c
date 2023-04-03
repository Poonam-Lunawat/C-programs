/ A program for switch case

#include<stdio.h>


void main()
{
    int a,b,res,ch;
    printf(" \n Enter two numbers :");
    scanf("%d %d",&a,&b);
    
    do{
        printf("\n Available operations : ");
        printf("\n 1: + \n 2: - \n 3: * \n 4:/ \n 0: exit");
         printf("\n select the desired operation : ");
         scanf("%d",&ch);
        res=0;
        switch(ch)
        {
            case 0: printf("!!! Thank you. Visit again !!!");
                     
                    break;
            case 1: 
                    res=a+b;
                    printf("Result of addition is  : %d",res);
                    break;
            case 2: 
                    res=a-b;
                    printf("Result of substraction is  : %d",res);
                    break;
            case 3: 
                    res=a*b;
                    printf("Result of multiplication is  : %d",res);
                    break;
            case 4: 
                    if(b!=0)
                    {
                        res=a/b;
                        printf("Result of division is  : %d",res);
                    }
                    else
                        printf(" \n can't divide by zero");
                    break;
            default:
                    printf("\n wrong choice");
                    
        }
        
    }while(ch!=0);
    