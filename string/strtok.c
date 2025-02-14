/*
Name:Amrita
Date:14/02/2025
Description:program to implement strtok function
Sample input:
Enter string1 : Bangalore;;::---Chennai:;Kolkata:;Delhi:-:Mumbai
Enter string2 : ;./-:
Sample output:
Tokens :
Bangalore
Chennai
Kolkata
Delhi
Mumbai
*/

#include <stdio.h>

void  my_strtok (char str[], char del[]);
int main()
{
    char str[100] ;
    char del[100];
    printf("Enter string\n");
    scanf("%s",str);
    printf("Enter the delimeter\n");
    scanf("%s",del);
     // Call custom strtok function
    my_strtok (str, del);
    return 0;
}


void  my_strtok (char str[], char del[])
{
    int i=0,k=0,j=0,s=0;
    char res[100];
    // Iterate through each character in the input string
    for(i=0; str[i]!='\0'; i++)
    {
        if(i==0)
        // Set the starting index of the first token
        k=0;    
        // Check if the current character is a delimiter
        for(j=0; del[j]!='\0'; j++)                  
        {                                 
            if (str[i] == del[j])                   
            {   
                // Extract the token from index 'k' to 'i-1'
                for(; k<i; k++)
                {
                    res[s] = str[k];
                    s++;
                }
                // Null-terminate the extracted token
                res[s] = '\0';
                s=0;
                 // Update the starting index for the next token
                k= i+1;
                // Print the extracted token if it's not empty
                if(res[0] != '\0')
                printf("%s\n",res);
                // Move to the next character after a delimiter
                break;
            }
        }
    }
    // Print the last token if any characters remain
    if (k < i) 
    {
        for (; k < i; k++) 
        {
            res[s] = str[k];
            s++;
        }
        res[s] = '\0';
        printf("%s\n", res);
    }
}
