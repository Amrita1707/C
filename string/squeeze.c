/*
Name:Amrita
Date:17/02/2025
Description:program Squeeze to character in s1 that matches any character in the string s2
*Read two strings s1 and s2 from user.
*Remove the characters in s1 that matches with s2.
*Should not use extra array or the pointer

Sample input:
Enter s1 : Dennis Ritchie
Enter s2 : Linux
Sample output:
After squeeze s1 : Des Rtche
*/

#include <stdio.h>

// Function to remove characters from str1 that are present in str2
void squeeze(char [], char []);

int main()
{
    char str1[30], str2[30];
    
    // Read first string from user
    printf("Enter string1:");
    scanf("%[^\n]", str1);
    
    // Read second string from user
    printf("Enter string2:");
    scanf(" %[^\n]", str2);
    
    // Call function to remove characters
    squeeze(str1, str2);
    
    // Print the modified string after removing characters
    printf("After squeeze s1 : %s\n", str1);
}

// Function to remove all occurrences of characters in str2 from str1
void squeeze(char str1[], char str2[])
{
    int i, j, k, p;

    // Loop through each character in str1
    for(i = 0; str1[i] != '\0'; i++)
    {
        // Compare current character of str1 with each character of str2
        for(j = 0; str2[j] != '\0'; j++)
        {
            // If a matching character is found
            if(str1[i] == str2[j])
            {
                k = i;  // Store index of character to be removed
                p = i;  // Store index for shifting
                
                // Shift characters to the left to remove the matched character
                while(str1[k] != '\0')
                {
                    str1[p] = str1[++k]; // Move next character into current position
                    p++;
                }
                
                // Reset i to 0 to recheck the modified string from the beginning
                // This ensures that no characters are skipped after removal.
                i = 0;  
            }
        }
    }
}

