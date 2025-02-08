/*
Name:Amrita
Date:27/07/2023
Description:Program to reverse a string
Sample input:Enter the string : palindrome
Sample output:
Reversed string is emordnilap
*/

#include <stdio.h>
int main()
{
    char str[100], temp;
    int i,j,len=0;
    
    //read a string from user
    printf("Enter the string : ");
    fgets(str,sizeof(str),stdin);
    
    // Calculate the length of the string (excluding the newline character)	
	while(str[i] != '\n')
	{
		  len++;
		  i++;
	}

    // Reverse the string by swapping characters
    for( j=0; j<(len/2); j++)
	{
 		temp = str[j];
		str[j] = str[len-j-1];
		str[len-j-1] = temp;
	}
	str[len] = '\0';
    printf("Reversed string is %s",str);	
}
