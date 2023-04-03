// Binary Search Recursive in C

#include <stdio.h>

int binarySearch(int array[], int x, int low, int high) {
  if (high >= low) {
    int mid = low + (high - low) / 2;
    // If found at mid, then return it
    if (array[mid] == x)
      return mid;

    // Search the left half
    if (array[mid] > x)
      return binarySearch(array, x, low, mid - 1);

    // Search the right half
    return binarySearch(array, x, mid + 1, high);
  }

  return -1;
}

int main(void) {
  int n,key,i;
  printf("\n How many elements array has ? ");;
  scanf("%d",&n);
  int array[n];
  printf("\n Enter elements : \n");
  for(i=0;i<n;i++)
  {
    scanf("%d",&array[i]);
  }
  printf("\n Searching for which element ? ");
  scanf("%d",&key);

  int result = binarySearch(array, key, 0, n - 1);
  if (result == -1)
    printf("Not found");
  else
    printf("Element is found at index %d", result);
}