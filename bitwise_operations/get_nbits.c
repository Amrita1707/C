/*
Name:Amrita
Date:05/02/2025
Description:program to get 'n' bits from given position of a number
Sample input:
Enter the number: 12
Enter number of bits: 3
Enter the pos: 4
Sample output:Result = 3
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
	  int i,n1,n2=0,n3=0;

      // Calculate the right shift amount to align bits
	  int d=((pos-n)+1);

	  for(i=0; i<n; i++)
	  {
		  // Extract the bit at position 'pos'
	   	  n1 = (num & ( 1<<(pos)));

		  // Decrement position to process the next bit
          pos--;
		  
		  // Combine extracted bits into n2
          n2 = (n2 | n1);
	  }

	  // Shift the extracted bits to the rightmost position
	  n3 = (n2 >> d);

      // Return the final extracted value
      return n3;
}
