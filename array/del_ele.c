/*
program in c to delete an element at desired position from an array(shouldn't use extra array).

Name : Amrita N S
Date : 17-05-2024

Description : 
1. Reads the size of the array, the array elements, and the position of the element to be deleted from user input.
2. Iterates through the array to find the element at the specified position.
3. Shifts the elements to the left from the position of the element to be deleted to overwrite the element.
4. Continues shifting until all elements after the deleted position are moved one position to the left.
5. Prints the modified array with the element removed.

Sample input :

Input the size of array : 5
Input 5 elements in the array :
element -> 0 : 1
element ->1 : 2
element -> 2 : 3
element ->3 : 4
element -> 4 : 5
Input the position to be deleted : 3

Sample Output  :
The new list is 1 2 4 5

*/

#include<stdio.h>
int main()
{
    int n,i,j,k,pos;
    //printf("Input the size of array : ");
    scanf("%d",&n);
    
    int arr[n];
    
    //printf("Input %d elements in the array : ",n);
    for(i = 0 ; i < n ; i ++)
    {
       //printf("element -> %d : ",i);
       scanf("%d",&arr[i]); 
       //printf("\n");
    }
    
    //printf("Input the position to be deleted : ");
    scanf("%d",&pos);
    
    // Iterate through the array to find the element at the given position
    for(j = 0 ; j < n ; j++)
    {
        // Check if current position matches the input position
        if( pos == (j+1))
        {
            // Shift elements to the left from the position to delete
            while( pos < n)
            {
            // Shift element left
            arr[pos-1] = arr[j+1];
            // Move to the next position
            pos++;
            // Increment j to continue shifting
            j++;
            }
        }
    }
    
    //printf("The new list is ");
    for(k = 0 ; k < (n-1) ; k++)
    {
        printf("%d ",arr[k]);
    }
}
