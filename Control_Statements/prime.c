/*
Name:Amrita
Date:04/03/2025
Description:write a script to check whether a given number is prime or not.
Sample input:Enter a number: 2
Sample output:2 is a prime number
*/

#include <stdio.h>

int main()
{
   int num,i,flag=0;
   printf("Enter a number: \n");
   scanf("%d",&num);
   // Check if the input is negative
   if(num < 0)
      printf("Invalid input");
   else
   {
		// Loop to check divisibility from 2 to num-1
   		for(i=2; i<num; i++)
   		{
       		 if(( num % i) == 0)
        	 {
				 // Set flag to 1 if num is divisible (not prime)
           		 flag=1;
             }
   	   }
   // If flag is set, num is not prime
   if(flag)
   		 printf("%d is not a prime number\n",num);
   // If flag is not set, num is prime
   else
   		 printf("%d is a prime number\n",num);
   return 0;
   }
}
