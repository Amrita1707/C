/*
 program to find the sum of 'n' odd natural numbers and display the numbers too

Name : Amrita N S
Date : 15-05-2024

Description :
Read the value of 'n' from the user.
Calculate the sum of 'n' odd natural numbers.
Display the numbers too.

Sample input and output :
Enter the Number : 5
The odd numbers are : 1 3 5 7 9 
The Sum of 5 odd natural numbers : 25

*/

#include<stdio.h>
int main()
{
    int n,sum=0,i;
    //Read input from user
    printf("Enter the Number :");
    scanf("%d",&n);
    
    if(n<=0)
    {
    printf("Invalid input");
    return 1;
    }
    
    printf("The odd numbers are : ");
    for(i=1; i<=n*2; i++)
    {
        //check number is divisible by 2  or not
        if(i % 2 != 0)
        {
            //if it not then print odd numbers and calculate sum of odd numbers
            printf("%d ",i);
            sum = sum + i;
        }
    }
    printf("The Sum of %d odd natural numbers : %d",n,sum);
}
