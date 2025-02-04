/* 
  Write a program to find second largest element in the array
  
  Name : Amrita N S
  Date : 04-02-2025
  
  Description : 
   
     *Program prompts user for an integer array of 5 elements
   
     *find largest element in the array
   
     *finally find second largest element in the array
  
  Sample input : 
  Enter the array elements 20 10 5 3 2 
  
  Sample output :
  Largest element is 20
  Second largest element is 10
 
*/

#include <stdio.h>

int main() 
{
   int arr[5],k;
   printf("Enter the array elements\n");
   for(k=0; k<5; k++)
   {
		 scanf("%d",&arr[k]);
   }
   int i,j,largest = arr[0], sec_largest= arr[0];
   for(i=1; i<5; i++)
   {
      if( largest < arr[i])
        largest = arr[i];
   }
   printf("Largest elelement is %d",largest);
   for(j=1; j<5; j++)
   {
       if( (sec_largest < arr[j]) && (arr[j] != largest))
       {
           sec_largest = arr[j];
       }
       else if( sec_largest == largest)
       {
           sec_largest = arr[j];
       }
   }
   printf("\nSecond largest element is %d",sec_largest);
   return 0;
}
