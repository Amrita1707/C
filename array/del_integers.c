/*
Write a function to remove all the even integers from array.

Name : Amrita N S
Date : 18-05-2024

Description :
Input
Read a size and array elements

Output
Remove the even numbers in the array

Sample input :
Enter the size : 8
Enter the elements : 1 2 4 5 10 6 3

Sample output
1 5 3

*/

#include <stdio.h>

int main() 
{
    int n, i, j, k=0,l,count=0; 

    // Prompt user to input the size of the array
    printf("Enter the size : ");
    scanf("%d", &n);

    int arr[n];
    
    
    // Declare a temporary array arr1 to hold odd elements
    int arr1[n];

    printf("Enter the elements : ");
    for (i = 0; i < n; i++) 
    {
        scanf("%d", &arr[i]);
    }
    
    // Iterate through the array to find odd elements
    for( j = 0 ; j < n ; j++)
    {
        // Check if the element is odd
        if( (arr[j] % 2) != 0)
        {
            // Store the odd element in arr1
            arr1[k] = arr[j];
            // Increment k to move to the next position in arr1
            k++;
        }
    }
    
     // Print the odd elements stored in arr1
    for( l = 0 ; l < k ; l++)
    {
        printf("%d ",arr1[l]);
    }
    return 0;
}
