#include <stdio.h>

main() {
   int arr[10];
   int item,k,n;
   printf("How many numbers you want to enter in array:\n");
   scanf("%d",&n);
   int i = 0, j = n;
   
   
   printf("Enter the elements of array :\n");

   for(i = 0; i<n; i++) {
      scanf("%d",&arr[i]);
   }
   
   printf("Enter the item for insert\n");
   scanf("%d",&item);
   printf("Enter the Position for the number\n");
   scanf("%d",&k);
   //k=k-1; //Array start from a[0] so position should start from 1

   n = n + 1; //Array size will be increase after insert
	
   while( j >= k) {
      arr[j+1] = arr[j];
      j = j - 1;
   }

   arr[k] = item;

   printf("The array elements after insertion :\n");

   for(i = 0; i<n; i++) {
      printf("arr[%d] = %d \n", i, arr[i]);
   }
}
