/*

Write a function to count the digits of a given number using recursion.

Name : Amrita N S
Date : 03-06-2024

Description : 

 *Program prompts user for an integer and stores it in n, with count initialized.
 
 *count_digits recursively increments count and divides n by 10 until n is 0.
 
 *When recursion ends, the function prints the total digit count.

Sample input : 
Enter the number : 50  

Sample output :
The number of digits in the number is : 2

*/

#include<stdio.h>

void count_digits(int);
int count;

int main()
{
    int n;
    // Input number
    printf("Enter the number : ");
    scanf("%d",&n);
    // Call the function to count digits
    count_digits(n);
}

void count_digits(int n)
{
    // If the number is greater than 0
    if( n > 0)
    {
        // Increment the digit count
        count++;
        // Recursive call with the number divided by 10
        count_digits(n/10);
    }
    // Recursive call with the number divided by 10 then print the count
    else
        printf("The number of digits in the number is : %d",count);
}
