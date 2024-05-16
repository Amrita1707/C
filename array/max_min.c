/*
Write a program in c to find the maximum and minimum element in an array.

Name : Amrita N S
Date : 16-05-2024
Description : 
*Read array size
*Print array elements
*Print maximum and minimum value of the array

Sample input and output :

Enter the number of elements to be stored in the array :  3
45    25    21    
Maximum element : 45
Minimum element : 21

*/

#include<stdio.h>
int main()
{
    int n,i,j,largest,smallest;
    
    printf("Enter the number of elements to be stored in the array :  ");
    scanf("%d",&n);
    
    int arr[n];
    
    //Read array elements from user
    for(i = 0 ; i < n ; i++)
    {
        scanf("%d",&arr[i]);
    }
    
    //Intialize largest and smallest as arrays first element
    largest = arr[0];
    smallest = arr[0];
    
    //Run a loop to find smallest and largest element of the array
    for(j = 1 ; j < n ; j++)
    {
        // Update largest if the current element is greater
        if(largest < arr[j])
          largest = arr[j];
          
        // Update smallest if the current element is smaller
        if(smallest > arr[j])
            smallest = arr[j];
    }
    
    printf("Maximum element : %d",largest);
    printf("\n");
    printf("Minimum element : %d",smallest);
}
