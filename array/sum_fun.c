/*
Write a function for find the sum of all the array elements.

Name : Amrita N S
Date : 20-05-2024

Description :
Note :
You should allocate the memory dynamically.
Input
Read a size and array elements from the user

Sample input :
Enter the size : 6
Enter the elements : 16 13 7 2 1 12

Sample output
51

*/

#include <stdio.h>
#include <stdlib.h>
 
void sum(int *, int n);

int main() 
{
    int n,i;

    // Prompt user to input the size of the array
    printf("Enter the size : ");
    scanf("%d", &n);

    int *arr = malloc(n*sizeof(int));
    if(arr == NULL)
        return -1;

    // Input elements into the array
    printf("Enter the elements : ");
    for (i = 0; i < n; i++) 
    {
        scanf("%d", &arr[i]);
    }
    
    sum(arr,n);
    
    free(arr);
}

void sum( int * ptr, int n )
{
    int sum = 0,i;
    for(i = 0 ; i < n ; i++)
    {
        sum = sum + ptr[i];
    }
    printf("%d",sum);
}
