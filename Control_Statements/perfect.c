/*
program to find the perfect numbers within a given number of range.

Name : Amrita N S
Date : 15-05-2024
Description : 
*Read 2 numbers from the user (i.e. starting number and ending number)
*Validate the numbers
*starting number >= 1 <= ending number
*ending number >= starting number 
*Generate the perfect numbers between the given range.

Sample input and output :
Enter the starting number :3
Enter the ending number : 20
The perfect numbers within the given range : 6

*/

#include<stdio.h>
int main()
{
    int n1,n2,i,j,sum;
    printf("Enter the starting number : ");
     scanf("%d",&n1);
    printf("Enter the ending number : ");
    scanf("%d",&n2);
    
    //check starting number and ending number is -ve
    if(n1<0 || n2<0)
    {
        printf("Invalid input");
        return 1;
    }
    
    printf("The perfect numbers within the given range :");
    for(i=n1; i<=n2; i++)
    {
        sum = 0;
        for(j=1; j<i; j++)
        {
            //check divisors of the number
            if( (i%j) == 0)
            {
            //calculate sum of the divisors
            sum = sum + j;
            }
        }
        //if sum is equal to the that number then number is perfect
        if(sum == i)
        {
            printf("%d ",i);
        }
    }
    return 1;
}
