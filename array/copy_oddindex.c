/*
C program to copy the elements of odd index from one array into another array

Name : Amrita N S
Date : 15-05-2024

Description : 
Read the size 'n' and n elements from the user.
Copy the odd index values to another array.
Print the values.

Sample input and output :
Enter the size of the array: 3
Enter 3 elements: 15 10 20
The elements stored in the first array are : 15 10 12
The elements stored in the second array are : 10
*/

#include<stdio.h>
int main()
{
    int n,i,j,k,l=0;
    printf("Enter the size of the array: ");
    scanf("%d",&n);
    int arr1[n],arr2[n];
    
    printf("\n");
    
    //Read array elements
    printf("Enter %d elements ",n);
    for(i = 0; i < n; i++)
    {
        scanf("%d",&arr1[i]);
    }
    
    printf("\n");
    
    //Print elements stored in the first array
    printf("The elements stored in the first array are : ");
    for(j = 0; j < n; j++)
    {
        printf("%d ",arr1[j]);
    }
    
    printf("\n");
    
    //copy the elements of odd index from first array(arr1[]) into second array(arr2[])
    printf("The elements stored in the second array are : ");
    for(k = 0; k < n; k++)
    {
        if(k % 2 != 0)
        {
           arr2[l] = arr1[k]; 
           printf("%d ",arr2[l]);
           l++;
        }
    }
}

