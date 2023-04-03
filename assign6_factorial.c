// // A program to find factorial of a given number
// #include<stdio.h>

// void main(){
//     int fact,n,i;
//     printf(" Enter the number : ");
//     scanf("%d",&n);
//     fact=n;
//     for(i=n;i>1;i--)
//     {
//             fact=fact*(i-1);       
//      }

//     /* for(i=1;i<n;i++){
//         fact=fact*i;
//     } */
//     printf(" \n the factorial of %d is  %d ", n,fact);
// }

//factorial with recursion

#include<stdio.h>

int factorial(int n)
{
    if(n==1)
        return 1;
    else
        return factorial(n-1)*n;
}

void main(){
    int n;
    printf("\n enter the number :");
    scanf("%d",&n);
    printf("\n factorial of %d is %d",n,factorial(n));
}