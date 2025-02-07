/*
WAP to toggle 'n' bits from given position of a number
Name:Amrita
Date:05/02/2025
Description:program to toggle 'n' bits from given position of a number
Sample input:
Enter the number: 15
Enter number of bits: 2
Enter the pos: 2
Sample output:Result =  9
*/

#include <stdio.h>

int get_nbits(int, int, int);

int main()
{
	 int num,n,pos,res;
	   
	 // Read input from users
	 printf("Enter the number : ");
	 scanf("%d",&num);
     printf("Enter number of bits : ");
	 scanf("%d",&n); 
	 printf("Enter the pos : ");
	 scanf("%d",&pos);

	 // Call the function to get n bits from given position
	 res = get_nbits(num,n,pos);
     printf("Result = %d",res); 
}

int get_nbits(int num, int n, int pos)
{
	  int i,n1=num,n2=0,n3=0;

	  for(i=0; i<n; i++)
	  {
		  
        // Toggle the bit at current position using XOR
         n1 = n1 ^ (1 << pos);
		 // Move to the next bit position (decrement)
         pos--;
	  }
	    
        // Return the final extracted value
        return n1;

}
