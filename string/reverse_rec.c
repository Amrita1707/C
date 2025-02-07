/*
Name:Amrita
Date:07/02/2025
Description:program to reverse the given string using recursive method
Sample input:
Enter a string : Hello
Sample output:
Reverse string is : olleH
*/

#include <stdio.h>
#include <string.h>
//Function declaration.
void reverse_recursive(char str[], int ind, int len);

int main()
{
    char str[30];
    int len=0,i;

    //Read a string from user.
    //printf("Enter any string : ");
    scanf("%[^\n]", str);
    
    //Find length of the string.
    for(i=0; str[i] != '\0'; i++)
	{
		  len++;
	}
    
    //Call reverse_recursive function.
    reverse_recursive(str, 0, len);
    
    printf("Reversed string is %s\n", str);
}

// Function to reverse a string using recursion
void reverse_recursive(char str[], int ind, int len)
{
    // Check if the index is less than half of the string length
    if (ind < (len / 2))
    {
        // Swap the character at the current index with its corresponding character from the end
        char temp = str[ind];
        str[ind] = str[len - ind - 1];
        str[len - ind - 1] = temp;
    }
    else
        // If ind reaches half of the string length, stop recursion
        return;

    // Recursive call to continue swapping the next pair of characters
    reverse_recursive(str, ++ind, len);
}

