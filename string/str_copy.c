/*
Name:Amrita 
Date:08/02/2025
Description:Program to copy a string.
Sample input:Enter the string : Hello World
Sample output:Copied string is Hello World
*/

#include <stdio.h>

//Function declaration
void my_strcpy(char dest[],char source[]);

int main()
{
	  char source[100], dest[100];

	  printf("Enter the string ");
	  fgets(source, sizeof(source), stdin);

	  // Call the function to copy the string	
	  my_strcpy(dest,source);
	  printf("Copied string is %s ", dest);
}

void my_strcpy( char dest[], char source[])
{
	  int i=0;

	  // Iterate through the source string until a newline character is found
	  for( i=0; source[i] != '\n'; i++)
	  {
			// Copy each character from source to destination
			dest[i] = source[i];
	  }
	  // Append null terminator at the end of the destination string
      dest[i] = '\0';
}

