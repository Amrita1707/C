/*
WAP to replace each string of one or more blanks by a single blank
Name:Amrita
Date:06/02/2025
Description:program to replace each string of one or more blanks by a single blank
Sample input:
Enter the string with more spaces in between two words
Pointers     are               sharp     knives.
Sample output:
Pointers are sharp knives.
*/


#include <stdio.h>

void rem_blanks(char []);

int main()
{
    char str[200];
	printf("Enter the string\n");
    scanf("%[^\n]", str);
	rem_blanks(str);
}

void rem_blanks( char str[])
{
    int i=0,j=0;
    // Loop through the string until the null terminator is encountered
    while(str[i] != '\0')
    {
        // Check if the current character is a space
        if(str[i] == ' ')
        {
			// Check if the next character is also a space
            if(str[i+1] == ' ')
            {
				// Set j to the index of the second space
                j = i+1;
				 // Shift characters to the left to remove extra spaces
                while(str[j] != '\0')
                {
				// Overwrite the current character with the next one
                str[j] = str[j+1];
                j++;
                }
			   // Ensure the string remains null-terminated
               str[j] = '\0';
            }
            else
		    // Move to the next character
            i++;
        }
          else
			// Move to the next character if it's not a space
            i++;
    }
    
	printf("%s",str);
}
