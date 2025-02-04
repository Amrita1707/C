/*

Write a function to print first 30 natural numbers using recursion.

Name : Amrita N S
Date : 03-06-2024
Description : Print first 30 natural numbers starting from 1 to 30 using recursion.

Sample output :
The natural numbers are : 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27 28 29 30

*/

#include<stdio.h>

void natural_numbers(int,int);

int main()
{
    printf("The natural numbers are : ");
    natural_numbers(30,1);
    return 0;
} 

void natural_numbers( int n , int i )
{
    // check current i value is not greater than 30
    if( i <= n)
    {
        // printf natural numbers
        printf("%d ",i);
        // call function itself(recursion)
        natural_numbers( 30, ++i );
    }
}
