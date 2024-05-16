/*
program to to reverse the given number

Name : Amrita N S
Date : 15-05-2024
Description : 
Read a number from user.
Reverse the given number.

Sample input and output :
Enter the number :  321
The reversed number is : 123

*/

#include<stdio.h>
int main()
{
    int n,n1,temp=0;
    printf("Enter the number ");
    scanf("%d",&n);
    n1 = n;
    
    while(n1)
    {
        //find last digit of the number in each iteration
        temp = (temp * 10 ) + (n1 % 10);
        //reverse the number
        n1 = n1/10;
    }
    printf("The reversed number is : %d",temp);
}
