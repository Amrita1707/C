/*
c program to print all unique elements in an array

Name : Amrita N S
Date : 15-05-2024

Description : 
Read 'n' and 'n' no.of elements of array.
Check for the unique number in the array.
Print only the unique numbers from the given array.

Sample input and output :
Enter the size of the array: 4
Enter 4 elements: 3 2 2 5
The unique elements found in the array are : 3 5  

*/

#include<stdio.h>
int main()
{
    int n,i,j,k,flag=0;
    printf("Enter the size of the array: ");
    scanf("%d",&n);
    
    int arr[n];
    
    printf("\n");
    
    //Read array elements
    printf("Enter %d elements: ",n);
    for(i = 0 ; i < n ; i++)
    {
        scanf("%d",&arr[i]);    
        
    }
    
    printf("The unique elements found in the array are : ");
    for(j = 0 ; j < n ; j++)
    {
        for(k = 0 ; k < n; k++)
        {
           if(  j != k )
           {
           //check no similar elements in the array then set flag as 1
           if( arr[j] != arr[k] )
            {
              flag = 1;
            }
            else
            {
              // if any similar elements in the array then break the inner loop
              flag = 0;
              break;
            }
           }
        }
        if(flag == 1)
        {
        printf("%d ",arr[j]);
        }
    }
}
