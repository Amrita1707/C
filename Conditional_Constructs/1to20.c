/*
program that prints the numbers from 1 to 20

Name : Amrita N S
Date : 15-05-2024
Description : 

Print values from 1 to 20, 
for divisible of 3 print "Fizz" instead of a number.
For divisible of 5 print "Buzz".
Divisible of both 3 & 5 print "FizzBuzz", for remaining values print the number.

Sample input and output :
1 2 Fizz 4 Buzz Fizz 7 8 Fizz Buzz 11 Fizz 13 14 FizzBuzz 16 17 Fizz 19 Buzz
*/

#include<stdio.h>
int main()
{
    int i;
    for(i=1; i<=20; i++)
    {
        if( i % 3 == 0 && i % 5 == 0)
           printf("FizzBuzz ");
        else if( i % 3 == 0)
           printf("Fizz ");
        else if(i % 5 == 0)
           printf("Buzz ");
        else
           printf("%d ",i);
    }
}
