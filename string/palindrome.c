/*
Name:Amrita
Date:08/02/2025
Description:Program to check the string is palindrome or not
Sample input:
Enter the string : Malayalam
Sample output:
yes,Entered string is palindrome
*/

#include <stdio.h>
int main()
{
	char str[100];
	int len=0,i,j,flag=0;


	printf("Enter the string ");
	fgets(str, sizeof(str), stdin);

    // Calculate the length of the string (excluding the newline character)
	for(i=0; str[i]!= '\n'; i++)
	{
		  len++;
	}
   
	// Check if the string is a palindrome by comparing characters from both ends	
	for(j=0; j<(len/2); j++)
	{
		// If characters do not match
		if(str[j] != str[len-j-1])
			  // Set flag indicating the string is not a palindrome
			  flag = 1;
	}

    if(flag)
		  printf("No, Entered string is not palindrome.");
	else
		  printf("Yes, Entered string is palindrome.");
}

