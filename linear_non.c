//linear search - non recursive
#include <stdio.h>
void search(int a[], int key);
int size;
void main()
{
    int a[20], i, k, found=0;
    printf("\n How many number of elements are in array?");
    scanf("%d", &size);
    printf("\n Enter %d elements: ", size);
    for (i = 0; i < size; i++)
        scanf("%d", &a[i]);
    printf("\n Enter the number to be searched :");
    scanf("%d", &k);
     search(a, k);
    
}

void search(int a[], int key)
{
    int i;
    int found=0;
    for (i = 0; i < size; i++)
    {
        if (a[i] == key)
        {
            found=1;
            break;
        }
    }
   if (found == 0)
        printf("\n Element not found");
    else
        printf("\n Element found at position: %d ", i+1);

}