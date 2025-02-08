/*
Name:Amrita
Date:8/02/2025
Description:program to calculate length of the string
Sample input:Enter the string : Hello
Sample output:String length is 5
*/

#include <stdio.h>

int find_len( char []);

int main()
{
	  char array[100];
	  int res=0;

	  printf("Enter the array\n");
	  fgets(array,sizeof(array),stdin);

	  // Call the function to calculate the length
	  res = find_len(array);
	  printf("Length of array is %d ",res);
}

// Function to calculate the length of a string (excluding the newline character)
int find_len( char str[])
{
	int j=0,len=0;

    // Iterate through the string until the newline character is found	
	for(j=0; str[j] != '\n'; j++)
	{
		len++;
	}
	return len;
}

