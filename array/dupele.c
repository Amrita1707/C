/*
program in c to count a total number of duplicate elements in an array.


Name : Amrita N S
Date : 18-05-2024

Sample input :
Input the size of array : 3
Input 3 elements to the array :
element -> 0 : 5
element -> 1 : 1
element -> 2 : 1

Sample Output  :
Total number of duplicate elements found in the array : 1

*/

#include<stdio.h>
int main()
{
    int n,i,j,k,count=0;
    // Prompt the user to input the size of the array
    printf("Input the size of array : ");
    scanf("%d",&n);
    
    //Declare the array with the given size
    int arr[n];
    
    // Prompt the user to input elements into the array
    printf("Input %d elements to the array : ",n);
    for(i = 0 ; i < n ; i++)
    {
       printf("element -> %d : ",i);
       scanf("%d",&arr[i]); 
    }
    
    // Nested loops to find duplicate elements
    for( j = 0 ; j < n ; j++)
    {
        for( k = (j+1) ; k < n ; k++)
        {
            // Check if the current element matches any subsequent element
            if(arr[j] == arr[k])
            {
                // Increment count if a duplicate is found
                count++;
            }
        }
    }
    
    // Print the total number of duplicate elements found in the array
    printf("%d",count);
    
    return 0;
}
