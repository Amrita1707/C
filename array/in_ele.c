/*
program in c to insert new value in the array without taking a extra array (unsorted list)

Name : Amrita N S
Date : 17-05-2024

Description : 
1. Reads the size of the array, the array elements, the value to be inserted, and the insertion position from user input.
2. Checks if the insertion position is out of bounds and directly places the value if true.
3. Shifts the elements to the right from the insertion point to make space for the new value if the position is within bounds.
4. Inserts the specified value at the given position within the array.
5. Prints the modified array with the newly inserted element.

Sample input :

Input the size of array : 4
Input 4 elements in the array :
element - 0 : 1
element - 1 : 8
element - 2 : 7
element - 3 : 10
Input the value to be inserted :  5
Input the position, where the value to be inserted :  2

Sample Output  :
The current list of the array : 
1 8 7 10
After inserting the element, the new list is :
1 5 8 7 10

*/

#include<stdio.h>
int main()
{
    int n,i,j,k,l,val,pos,temp,temp1;
    
    // Prompt user to input the size of the array
    printf("Input the size of array : ");
    scanf("%d",&n);
    
    int arr[30];
    
    printf("Input %d elements in the array :\n",n) ;
    // Input elements into the array
    for(i = 0 ; i < n ; i++)
    {
        printf("element - %d : ",i);
        scanf("%d",&arr[i]);
    }
    
    // Prompt user to input the value to be inserted
    printf("Input the value to be inserted : ");
    scanf("%d",&val);
    
    // Prompt user to input the position where the value should be inserted
    printf("Input the position, where the value to be inserted : ");
    scanf("%d",&pos);
    
    // Display the current list of array elements
    printf("The current list of the array : ");
    for( j = 0 ; j < n ; j++)
    {
        printf("%d ",arr[j]);
    }
    
    // Check position is greater than or equal to the array size 
    if( pos >= n)
    {
        arr[pos-1] = val;
    }
    else
    {
        // Loop through the array to find the correct position for insertion
        for( k = 0 ; k < n ; k++)              
        {
            // Check if current position matches the input position
            if( pos == (k+1))
            {    
                // Store the current element in temp
                temp = arr[k];
                // Insert the new value at the specified position
                arr[k] = val; 
                // Shift the remaining elements to the right
                while(pos <= n)
                {   
                    if(pos < n)
                    {
                        // Store the next element
                        temp1 = arr[pos];
                    }
                
                    // Move the current temp to the next position
                    arr[pos] = temp;
                    // Update temp with the next element
                    temp = temp1;
                    pos++;
                }
            }
        }
    }
    
    // Print the array after inserting the new element
    printf("\n");
    printf("After inserting the element, the new list is : ");
    for( l = 0 ; l <= n ; l++)
    {
        printf("%d ",arr[l]);
    }
    
}
