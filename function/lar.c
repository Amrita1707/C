/*
 Write a function to get the largest element of an array using the function.
  
Name : Amrita N S
Date : 03-06-2024

Description :
1. The code reads an integer `n` representing the number of elements to be stored in the array, and then reads `n` elements into the array `arr`.
2. The `largest` function iterates through the array `arr`, comparing elements to find and return the largest element.
3. The main function prints the largest element in the array using the result returned by the `largest` function.

Sample input :
Input the number of elements to be stored in the array : 4
Input 4 elements in the array :
element - 0 : 50
element - 1 : 35
element - 2 : 40
element - 3 : 20

Sample output :
The largest element in the array is : 50
*/

#include<stdio.h>

int largest(int [], int);

int main()
{
    int n;
    // input size of the array
    //printf("Input the number of elements to be stored in the array : ");
    scanf("%d",&n);
    
    // declare an array
    int arr[n];
    printf("\n");
    
    //call the largest function to find largest element in the array and print it
    printf("/*The largest element in the array is :*/ %d ",largest(arr,n));
    return 0;
}

int largest ( int arr[] , int n)
{
    int j;
    
    // input array elements
    for( j = 0 ; j < n ; j++)
    {
        //printf("element - %d : ",j);
        scanf("%d",&arr[j]);
    }
    
    // find largest element in the array
    int lar = arr[0], i;
    for(i = 0 ; i < n ; i++)
    {
        if( lar < arr[i] )
            lar = arr[i];
    }
    
    //return largest element
    return lar;
}
