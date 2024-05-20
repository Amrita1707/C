/*
c program to insert New value in the array (sorted list )

Name : Amrita N S
Date : 18-05-2024

Sample input :
Input the size of array : 3
Input 3 elements in the array :
element -> 0 : 1
element -> 1 : 4
element -> 2 : 6
Input the value to be inserted : 5

Sample Output  :
Array elements after inserting : 1 4 5 6

*/

#include <stdio.h>

int main() {
    int n, i, j, val, pos;

    // Prompt user to input the size of the array
    scanf("%d", &n);

    int arr[31];

    // Input elements into the array
    for (i = 0; i < n; i++) 
    {
        scanf("%d", &arr[i]);
    }

    // Input the value to be inserted
    scanf("%d", &val);

    // Find the position to insert the new value
    for (pos = 0; pos < n; pos++) 
    {
        if (arr[pos] > val) 
        {
            break;
        }
    }

    // Shift elements to the right to make space for the new value
    for (j = n; j > pos; j--)
    {
        arr[j] = arr[j - 1];
    }

    // Insert the new value
    arr[pos] = val;

    // Print the array after insertion
    printf("Array elements after inserting : ");
    for (i = 0; i <= n; i++) 
    {
        printf("%d ", arr[i]);
    }

    return 0;
}
