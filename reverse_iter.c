/*
WAP to reverse the given string using iterative method
Name:Amrita
Date:07/02/2025
Description:program reverse the given string using iterative method
Sample input:
Enter a string : Hello World
Sample output:
Reverse string is : dlroW olleH
*/ 

#include <stdio.h>

void reverse_iterative(char str[], int );

int main()
{
    char str[30];
    int len=0,i;

    //Read a string from user.
    printf("Enter a string : ");
    scanf("%[^\n]", str);
    
	for(i=0; str[i]!='\0'; i++)
	{
		  len++;
	}
	
    //Call a function.
    reverse_iterative(str,len);
    
    printf("Reversed string is %s\n", str);
}

void reverse_iterative( char str[], int l)
{
	  int i=0;
	  char temp;
	  // Loop to reverse the string by swapping characters from both ends
  	  for(i = 0; i < (l / 2); i++)  
  	  {
      	  // Store the current character in a temporary variable
      	  temp = str[i];

      	  // Swap the character from the start with the corresponding character from the end
      	  str[i] = str[l - i - 1];

      	  // Assign the stored character to the opposite position
      	  str[l - i - 1] = temp;
  		}

}
