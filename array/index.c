/*
Write a function of given an array of numbers, find the index of smallest array elements (the pivot), for which the sums of     all the elements to the left and to the right are equal. the array may not be reordered.

Name : Amrita N S
Date : 20-05-2024

Description :

arr=[1,2,3,4,6]
the sum of the first three elements, 1+2+3=6. The value of the last element is 6. 
Using zero based indexing, arr[3]=4 is the pivot between the two subarrays.
The index of the pivot is 3.
Input :
int array[n] : an array of integers.
Output :
int : an integer representing the index of the pivot.

Sample input :
Enter the size : 4
1 2 3 3

Sample output :
2

*/

#include <stdio.h>

int main() 
{
    int n,i,j,n1,k,sum=0;

    // Prompt user to input the size of the array
    scanf("%d", &n);

    int arr[31];

    // Input elements into the array
    for (i = 0; i < n; i++) 
    {
        scanf("%d", &arr[i]);
    }
    
    // Calculate half of the array size
    n1 = n/2;
    
    // Sum the first half of the array elements
    for(j = 0 ; j < n1 ; j++)
    {
        sum = sum + arr[j];
    }
    
    // Assign the array size to k
    k=n;
    
    // Check if the sum of the first half equals the last element in the array
    if(sum == arr[k-1])
    {
        // If the condition is true, print the index of the second last element
        printf("%d ",k-2);
    }
    
}
