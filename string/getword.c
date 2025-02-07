/*
WAP to implement getword function
Name:Amrita
Date:07/02/2025
Description:program to implement getword function
Sample input:
Enter the string : Welcome to Emertxe
Sample output:
You entered Welcome and the length is 7
*/ 


#include <stdio.h>
int getword(char []);

int main()
{
	  char str[200];
	  int ret = 0;

	  printf("Enter the string\n");
	  fgets(str, sizeof(str), stdin); 

	  ret = getword(str);
	  printf("%d",ret);
}

int getword( char str[])
{
	  int i=0,c=0;

      // Loop through the string until null terminator ('\0') is found
	  for( i=0; str[i] != '\0'; i++)
	  {
			// Count characters until a space or newline is encountered
			if( str[i] != ' ' && str[i] != '\n')
			{
				  // Increment counter for word length
				  c++;
			}
			else 
                // Stop counting when a space or newline is encountered
			    break;
	  }
	  str[c] = '\0';
	  return c;
}
