/*
Name:Amrita
Date:04/02/2025
Description:program to replace 'n' bits of a given number
   *Read number num from user.
   *Read number n from user.
   *Read number val from user
   *Fetch n number of bits from LSB end of val and replace in the last n bits of num.
   *Return new value of num. If num is 10 and n is 3 and val is 12
	10 -> 0 0 0 0 1 0 1 0 
 	12 -> 0 0 0 0 1 1 0 0 
 	The program should print result as 12 (1 1 0 0)
Sample input:
Enter the number: 10
Enter number of bits: 3
Enter the value: 12
Sample output:Result = 12
*/

#include <stdio.h>
int replace(int,int,int);
int main()
{
	  //variable declaration
	  int num,n,val,res;

	  //read values from user
	  printf("Enter the number : ");
	  scanf("%d",&num);
      printf("\nEnter number of bits : ");
	  scanf("%d",&n);
      printf("\nEnter the value : ");
	  scanf("%d",&val); 

	  //call a function and store its result to res
	  res=replace(num, n, val);
	  printf("\nResult = %d\n",res);
}

int replace ( int num, int n, int val )
{
	int n1;
	//to replace 'n' bits of a given number
    num = (num & (~(( 1 << n ) -1)));
    n1 = (num | val) ;
	return n1;
}

