/*
program in c to find the sum of all elements of the array.

Name : Amrita N S
Date : 17-05-2024

Description : 
1. Reads the size of the array from user input.
2. Declares an array of the given size.
3. Reads the elements of the array from user input.
4. Iterates through the array, calculating the sum of all its elements.
5. Prints the total sum of the array elements.

Sample input :
Input the size of array : 3
Input 3 elements in the array :
element -> 0 : 2
element -> 1 : 5
element -> 2 : 8

Sample Output  :
Sum of all elements in the array : 15

*/

#include<stdio.h>
int main()
{
    int n,i,j,sum=0;
    
    // Read the size of the array from user input
    //printf("Input the size of array : ");
    scanf("%d",&n);
    
    // Declare an array of size n
    int arr[n];
    
    // Loop to read elements into the array
    for( i = 0 ; i < n ; i++)
    {
       // printf("element -> %d : ",i);
        scanf("%d",&arr[i]);
    }
    
    // Loop to calculate the sum of array elements
    for(j = 0 ; j < n ; j++)
    {
        // Add each element to the sum
        sum = sum + arr[j];
    }
    
    printf("%d",sum);
    
    return 0;
}
