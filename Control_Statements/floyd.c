/*
program in C to print the Floyd's Triangle.

Name : Amrita N S
Date : 15-05-2024

Description :
Read a number from user.
Generate the given pattern based on user input

Sample input and output :
Enter a  number: 5
1
0 1
1 0 1
0 1 0 1
1 0 1 0 1

*/

#include<stdio.h>
int main()
{
    int n,i,j;
    printf("Enter a  number: ");
    scanf("%d",&n);
    
    if(n<0)
    {
    printf("Invalid input");
    return 1;
    }
    
    //run a for loop to print Floyd's Triangle in nth lines- handle rows
    for(i=1; i<=n; i++)
    {
        //handle no of columns in each row
        for(j=1; j<=i; j++)
        {
        //check sum of the row index and column index is even, if it is even then print 1 else 0 
        if( (i+j) % 2 == 0)
            printf("%d ",1);
        else
            printf("%d ",0);
        }
        printf("\n");
    }
    return 1;
}
