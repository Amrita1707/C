/*
You are transporting some boxes through a tunnel, where each box is a parallelepiped, and is characterized by its length, width and height.
Name : Amrita N S
Date : 20-05-2024

Description : 
The height of the tunnel 41 feet and the width can be assumed to be infinite. A box can be carried through the tunnel only if its height is strictly less than the tunnel's height. Find the volume of each box that can be successfully transported to the other end of the tunnel. Note: Boxes cannot be rotated.

Input Format
The first line contains a single integer n, denoting the number of boxes.n lines follow with three integers on each separated by single spaces - length[i], width[i] and height[i] which are length, width and height in feet of the i-th box.

Constraints
*) 1 <= n <= 100
*) 1 <= length[i], width[i], height[i] <= 100

Output Format
For every box from the input which has a height lesser than 41 feet, print its volume in a separate line.

Sample input :
4
5 5 5
1 2 40
10 5 41
7 2 42

Sample Output :
125
80

*/

#include <stdio.h>

int main() 
{
    int n,i,j;

    // Prompt user to input the size of the array
    printf("Enter the size : ");
    scanf("%d", &n);

    // Array to store dimensions of 'n' boxes, each with 3 dimensions
    int arr[n][30];
    // Arrays to store length, width, and height of 'n' boxes
    int length[30], width[30], height[30];
    
    // Input dimensions for each box
    for(i = 0 ; i < n ; i++)
    {
        for(j = 0 ; j < 3 ; j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    
    for(i = 0 ; i < n ; i++)
    {
        length[i] = arr[i][0];
        width[i] = arr[i][1];
        height[i] = arr[i][2];
        if(height[i] < 41 )
        {
            // Calculate and print volume if height is less than 41
            printf("%d\n",length[i]*width[i]*height[i]); 
        }
    }
    return 0;
}
