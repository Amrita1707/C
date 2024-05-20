/*
Write a function to reverse the array elements.

Name : Amrita N S
Date : 20-05-2024

Description :
Read a size and array elements from the user.
Output
Print the array elements(after reverse the array elements).

Sample input :
Enter the size : 6
Enter the elements : 16 13 7 2 1 12

Sample output
12 1 2 7 13 16

*/

#include <stdio.h>
void rev(int *, int);

int main() 
{
    int n,i;

    // Prompt user to input the size of the array
    printf("Enter the size : ");
    scanf("%d", &n);

    int arr[n];

    // Input elements into the array
    printf("Enter the elements : ");
    for (i = 0; i < n; i++) 
    {
        scanf("%d", &arr[i]);
    }
    //call rev function
    rev(arr,n);
}

void rev( int * arr, int n)
{
    int i,j,temp;
    
    //reverse the array
    for( i = 0 ; i < (n/2) ; i++)
    {
        temp = arr[i];
        arr[i] = arr[(n-1)-i];
        arr[n-1-i] = temp;
    }
    
    //print the reversed array
    for(j = 0 ; j < n ; j++)
    {
        printf("%d ",arr[j]);
    }
}
