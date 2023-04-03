// linear search recursive
#include<stdio.h>
int search(int n,int a[],int key);
int size;
void main()
{
    int a[20],i,k,found=0;
    printf("\n Enter the number of elements in array");
    scanf("%d",&size);
    printf("\n Enter %d elements",size);
    for(i=0;i<size;i++)
        scanf("%d",&a[i]);
    printf("\n Enter the number to be searched :");
    scanf("%d",&k);
    found=search(0,a,k);
    if(found==0)
        printf("\n Element not found");
    else
        printf("\n Element found at %d position",found);
}

int search(int n,int a[], int key)
{
if(n<size){
if(a[n]==key)                                   //a[3]==key   11 22 33 44 55
    return n;
else
    return search(n+1,a,key);                   //search(3,a,key)
}
else
    return 0;
}
