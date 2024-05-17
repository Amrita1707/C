/*
program in c to sort elements of the array in descending order.

Name : Amrita N S
Date : 17-05-2024
Description : 
*Read array size
*Input array
*Sort the arra in descending order

Sample input and output :
Input the size of array : 3
Input 3 elements in the array :
5    9     1
After sorting:
9 5 1

*/

#include<stdio.h>
int main()
{
    int n,i,j,l,k,temp;
    printf("Input the size of array : ");
    scanf("%d",&n);
    
    int arr[n];
    
    printf("Input %d elements in the array : ",n);
    // Input elements in the array
    for( i = 0 ; i < n ; i++)
    {
        scanf("%d",&arr[i]);
    }

    // Sorting the array in descending order using nested loops
    // Outer loop iterates over elements from the first to the second last.
    for(j = 0 ; j < (n-1) ; j++) 
    {
        
        for(l = (j+1) ; l < n ; l++)
        {
            // If the current element is less than the next element, swap them.   
            if(arr[j] < arr[l])
            {
                // Temporary variable to hold the current element.
                temp = arr[j];
                // Assigning the next element to the current position.
                arr[j] = arr[l];
                // Assigning the current element to the next position.
                arr[l] = temp;
            }
        }
    }
   
    printf("After sorting: ");
    printf("\n");
    // Output the sorted array
    for( k = 0 ; k < n ; k++)
    {
        printf("%d ",arr[k]);
    } 
}
