/*
program to find the smallest number among three.

Name : Amrita N S
Date : 15-05-2024
Description :
Read 3 numbers from the user.
Find the smallest number among the 3 entered numbers.

Sample input and output :
Enter the num1 value : 5
Enter the num2 value : 3
Enter the num3 value : 1
The smallest number is : 1
*/

#include<stdio.h>
//define macro to find the smallest number among three.
#define SMALL(a,b,c)   a<b ?(a<c ? a : c) : (b<c ? b : c)
int main()
{
    int n1,n2,n3;
    printf("Enter the num1 value : ");
    scanf("%d",&n1);
    printf("Enter the num2 value : ");
    scanf("%d",&n2);
    printf("Enter the num3 value : ");
    scanf("%d",&n3);
    printf("The smallest number is : %d",SMALL(n1,n2,n3));
}
