/*
Write a function for Given an integer array, numbers, count the number of elements that occur more than once.

Name : Amrita N S
Date : 18-05-2024

Description : 
numbers = [1, 3, 3, 4, 4, 4]
There are two non-unique elements: 3 and 4.
Input :
int array[n] : an array of integers.
Output :
int : an integer that denotes the number of non-unique values in the number array

Sample input :
Enter the size : 8
1 3 1 4 5 6 3 2

Sample output :
2

*/

#include <stdio.h>

int main() 
{
    int n, i, j, k, count=0; 

    // Prompt user to input the size of the array
    scanf("%d", &n);

    int arr[n];

    // Input elements into the array
    for (i = 0; i < n; i++) 
    {
        scanf("%d", &arr[i]);
    }
    
    // Iterate over each element in the array
    for(j = 0 ; j < n ; j++ )
    {
        // For each element, check the elements that come after it in the array
        for( k = (j+1) ; k < n ; k++)
        {
            // If a duplicate is found, increment the count
            if(arr[j] == arr[k])
            {
                count++;
            }
        }
    }
    
    printf("%d",count);
    return 0;
}
