/*
Name:Amrita
Date:08/02/2025
Description:program to compare two strings
Sample input:
Enter the string1 : Emertxe
Enter the string2 : Emertxe
Sample output: Entered strings are equal
*/

#include <stdio.h>
void my_strcmp(char str1[],char str2[]);

int main()
{
	char str1[100],str2[100];

	printf("Enter the string1 ");
	fgets(str1, sizeof(str1), stdin);
	printf("Enter the string2 ");
	fgets(str2, sizeof(str2), stdin);

	my_strcmp(str1,str2);
}

void my_strcmp( char str1[], char str2[])
{
	  int i,flag = 0;
	  // Iterate through the first string until the newline character is found
	  for(i=0; str1[i] != '\n'; i++)
	  {
			// Compare characters at each position
			if(str1[i] != str2[i])
			{
                // Set flag if a mismatch is found
				flag = 1;
			}
	  }
      // Check if strings are equal or not
	  if(flag)
	  {
			printf("Entered Strings are not equal");
	  }
	  else
			printf("Entered Strings are equal");
}
