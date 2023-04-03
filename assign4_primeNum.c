// // A program to generate prime numbers

// #include <stdio.h>

// int main() {
//     // Write C code here
//     int n,i,j,count;
//     printf("Enter the range: ");
//     scanf("%d",&n);
//     printf(" prime numbers in the range of 1 to %d are: \n",n);
//     for (i=1;i<=n;i++)
//     {
//         count=0;
//         for(j=2;j<=i/2;j++){
//          if(i%j==0){
//             count++;
//             break;
//         }
            
//         }
//         if(count==0 && i!=1){
//             printf(" %d",i);
//         }
//     }
//     return 0;
// }
// A program to generate prime numbers

#include <stdio.h>

int main() {
    // Write C code here
    int n,i,j,count;
    printf("Enter the range: ");
    scanf("%d",&n);
    printf(" prime numbers in the range of 1 to %d are: \n",n);
    for (i=0;i<=n;i++)
    {
        count=0;
        for(j=1;j<=i;j++){
         if(i%j==0){
            count++;
            //break;
        }
            
        }
        if(count==2 ){
            printf(" %d",i);
        }
    }
    return 0;
}